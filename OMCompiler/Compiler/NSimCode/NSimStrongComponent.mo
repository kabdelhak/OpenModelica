/*
* This file is part of OpenModelica.
*
* Copyright (c) 1998-2020, Open Source Modelica Consortium (OSMC),
* c/o Linköpings universitet, Department of Computer and Information Science,
* SE-58183 Linköping, Sweden.
*
* All rights reserved.
*
* THIS PROGRAM IS PROVIDED UNDER THE TERMS OF GPL VERSION 3 LICENSE OR
* THIS OSMC PUBLIC LICENSE (OSMC-PL) VERSION 1.2.
* ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS PROGRAM CONSTITUTES
* RECIPIENT'S ACCEPTANCE OF THE OSMC PUBLIC LICENSE OR THE GPL VERSION 3,
* ACCORDING TO RECIPIENTS CHOICE.
*
* The OpenModelica software and the Open Source Modelica
* Consortium (OSMC) Public License (OSMC-PL) are obtained
* from OSMC, either from the above address,
* from the URLs: http://www.ida.liu.se/projects/OpenModelica or
* http://www.openmodelica.org, and in the OpenModelica distribution.
* GNU version 3 is obtained from: http://www.gnu.org/copyleft/gpl.html.
*
* This program is distributed WITHOUT ANY WARRANTY; without
* even the implied warranty of  MERCHANTABILITY or FITNESS
* FOR A PARTICULAR PURPOSE, EXCEPT AS EXPRESSLY SET FORTH
* IN THE BY RECIPIENT SELECTED SUBSIDIARY LICENSE CONDITIONS OF OSMC-PL.
*
* See the full OSMC Public License conditions for more details.
*
*/
encapsulated package NSimStrongComponent
"file:        NSimStrongComponent.mo
 package:     NSimStrongComponent
 description: This file contains the data types and functions for strong
              components in simulation code phase.
"

protected
  // OF imports
  import DAE;

  // NF imports
  import BackendExtension = NFBackendExtension;
  import ComponentRef = NFComponentRef;
  import Expression = NFExpression;
  import InstNode = NFInstNode.InstNode;
  import Operator = NFOperator;
  import Statement = NFStatement;
  import Type = NFType;
  import Variable = NFVariable;

  // old backend imports
  import OldBackendDAE = BackendDAE;

  // Backend imports
  import BEquation = NBEquation;
  import BVariable = NBVariable;
  import StrongComponent = NBStrongComponent;
  import System = NBSystem;
  import Tearing = NBTearing;

  // Old SimCode imports
  import OldSimCode = SimCode;

  // SimCode imports
  import SimCode = NSimCode;
  import NSimJacobian.SimJacobian;
  import NSimVar.SimVar;

  // Util imports
  import Error;

public
  uniontype Block
    "A single blck from BLT transformation."

    record RESIDUAL
      "Single residual equation of the form
      0 = exp"
      Integer index;
      Expression exp;
      DAE.ElementSource source;
      BEquation.EquationAttributes attr;
    end RESIDUAL;

    record ARRAY_RESIDUAL
      "Single residual array equation of the form
      0 = exp. Structurally equal to RESIDUAL, but the destinction is important
      for code generation."
      Integer index;
      Expression exp;
      DAE.ElementSource source;
      BEquation.EquationAttributes attr;
    end ARRAY_RESIDUAL;

    record SIMPLE_ASSIGN
      "Simple assignment or solved inner equation of (casual) tearing set
      (Dynamic Tearing) with constraints on the solvability
      lhs := rhs"
      Integer index;
      ComponentRef lhs "left hand side of equation";
      Expression rhs;
      DAE.ElementSource source;
      // ToDo: this needs to be added for tearing later on
      //Option<BackendDAE.Constraints> constraints;
      BEquation.EquationAttributes attr;
    end SIMPLE_ASSIGN;

    record ARRAY_ASSIGN
      "Array assignment where the left hand side can be an array constructor.
      {a, b, ...} := rhs"
      Integer index;
      Expression lhs;
      Expression rhs;
      DAE.ElementSource source;
      BEquation.EquationAttributes attr;
    end ARRAY_ASSIGN;

    record ALIAS
      "Simple alias assignment pointing to the alias variable."
      Integer index;
      Integer aliasOf;
    end ALIAS;

    record ALGORITHM
      "An algorithm section."
      // ToDo: do we need to keep inputs/outputs here?
      Integer index;
      list<Statement> statements;
      BEquation.EquationAttributes attr;
    end ALGORITHM;

    record INVERSE_ALGORITHM
      "An algorithm section that had to be inverted."
      Integer index;
      list<Statement> statements;
      list<ComponentRef> knownOutputs "this is a subset of output crefs of the original algorithm, which are already known";
      Boolean insideNonLinearSystem;
      BEquation.EquationAttributes attr;
    end INVERSE_ALGORITHM;

    record IF
      "An if section."
      // ToDo: Should this even exist outside algorithms? Any if equation has to be
      // converted to an if expression, even if that means it will be residual.
      Integer index;
      BEquation.IfEquationBody body;
      DAE.ElementSource source;
      BEquation.EquationAttributes attr;
    end IF;

    record WHEN
      "A when section."
      Integer index;
      Boolean initialCall "true, if top-level branch with initial()";
      BEquation.WhenEquationBody body;
      DAE.ElementSource source;
      BEquation.EquationAttributes attr;
    end WHEN;

    record FOR
      "A for loop section used for non scalarized models."
      Integer index;
      InstNode iter;
      Expression range;
      ComponentRef lhs;
      Expression rhs;
      DAE.ElementSource source;
      BEquation.EquationAttributes attr;
    end FOR;

    record LINEAR
      "Linear algebraic loop."
      LinearSystem system;
      Option<LinearSystem> alternativeTearing;
    end LINEAR;

    record NONLINEAR
      "Nonlinear algebraic loop."
      NonlinearSystem system;
      Option<NonlinearSystem> alternativeTearing;
    end NONLINEAR;

    record HYBRID
      "Hyprid system containing both continuous and discrete equations."
      Integer index;
      Block continuous;
      list<SimVar> discreteVars;
      list<Block> discreteEqs;
      Integer indexHybridSystem;
    end HYBRID;

    function toString
      // ToDo: Update alias string to print actual name. Update structure?
      input Block blck;
      input output String str = "";
    algorithm
      str := match blck
        local
          Block qual;

        case qual as RESIDUAL()           then str + "(" + intString(qual.index) + ") 0 = " + Expression.toString(qual.exp) + "\n";
        case qual as ARRAY_RESIDUAL()     then str + "(" + intString(qual.index) + ") 0 = " + Expression.toString(qual.exp) + "\n";
        case qual as SIMPLE_ASSIGN()      then str + "(" + intString(qual.index) + ") " + ComponentRef.toString(qual.lhs) + " := " + Expression.toString(qual.rhs) + "\n";
        case qual as ARRAY_ASSIGN()       then str + "(" + intString(qual.index) + ") " + Expression.toString(qual.lhs) + " := " + Expression.toString(qual.rhs) + "\n";
        case qual as ALIAS()              then str + "(" + intString(qual.index) + ") Alias of " + intString(qual.aliasOf) + "\n";
        case qual as ALGORITHM()          then str + "(" + intString(qual.index) + ") Algorithm\n" + Statement.toStringList(qual.statements, str) + "\n";
        case qual as INVERSE_ALGORITHM()  then str + "(" + intString(qual.index) + ") Inverse Algorithm\n" + Statement.toStringList(qual.statements, str) + "\n";
        case qual as IF()                 then str + BEquation.IfEquationBody.toString(qual.body, str + "    ", "(" + intString(qual.index) + ") ") + "\n";
        case qual as WHEN()               then str + BEquation.WhenEquationBody.toString(qual.body, str + "    ", "(" + intString(qual.index) + ") ") + "\n";
        case qual as FOR()                then str + "(" + intString(qual.index) + ") for " + InstNode.name(qual.iter) + " in " + Expression.toString(qual.range) + "\n" + str + "  " + ComponentRef.toString(qual.lhs) + " := " + Expression.toString(qual.rhs) + "\n" + str + "end for;";
        case qual as LINEAR()             then str + "(" + intString(qual.system.index) + ") " + LinearSystem.toString(qual.system, str);
        case qual as NONLINEAR()          then str + "(" + intString(qual.system.index) + ") " + NonlinearSystem.toString(qual.system, str);
        case qual as HYBRID()             then str + "(" + intString(qual.index) + ") Hybrid\n"; // ToDo!
                                          else getInstanceName() + " failed.\n";
      end match;
    end toString;

    function listToString
      input list<Block> blcks;
      input output String str = "";
      input String header = "";
    protected
      String indent = str;
    algorithm
      str := if header <> "" then StringUtil.headline_3(header) else "";
      for blck in blcks loop
        str := str + Block.toString(blck, indent);
      end for;
    end listToString;

    function createBlocks
      input list<System.System> systems;
      output list<list<Block>> blcks = {};
      input output SimCode.SimCodeIndices simCodeIndices;
    protected
      list<Block> tmp;
    algorithm
      for system in systems loop
        (tmp, simCodeIndices) := fromSystem(system, simCodeIndices);
        blcks := tmp :: blcks;
      end for;
      blcks := listReverse(blcks);
    end createBlocks;

    function createInitialBlocks
      input list<System.System> systems;
      output list<Block> blcks = {};
      input output SimCode.SimCodeIndices simCodeIndices;
    protected
      list<Block> tmp;
    algorithm
      for system in systems loop
        (tmp, simCodeIndices) := fromSystem(system, simCodeIndices);
        blcks := listAppend(blcks, tmp);
      end for;
      blcks := listReverse(blcks);
    end createInitialBlocks;

    function createDAEModeBlocks
      input list<System.System> systems;
      output list<list<Block>> blcks = {};
      output list<SimVar> vars = {};
      input output SimCode.SimCodeIndices simCodeIndices;
    protected
      Pointer<Integer> idx_ptr = Pointer.create(simCodeIndices.daeModeResidualIndex);
      Pointer<list<SimVar>> vars_ptr = Pointer.create({});
      list<Block> tmp;
    algorithm
      for system in systems loop
        BVariable.VariablePointers.map(system.unknowns, function SimVar.traverseCreate(acc = vars_ptr, uniqueIndexPtr = idx_ptr));
        (tmp, simCodeIndices) := fromSystem(system, simCodeIndices);
        blcks := tmp :: blcks;
      end for;
      vars := Pointer.access(vars_ptr);
      simCodeIndices.daeModeResidualIndex := Pointer.access(idx_ptr);
      blcks := listReverse(blcks);
    end createDAEModeBlocks;

    function fromSystem
      input System.System system;
      output list<Block> blcks;
      input output SimCode.SimCodeIndices simCodeIndices;
    algorithm
      blcks := match system.strongComponents
        local
          array<StrongComponent> comps;
          Block tmp;
          list<Block> result = {};
        case SOME(comps)
          algorithm
            for i in 1:arrayLength(comps) loop
              (tmp, simCodeIndices) := fromStrongComponent(comps[i], simCodeIndices);
              result := tmp :: result;
            end for;
        then listReverse(result);

        else algorithm
          Error.addMessage(Error.INTERNAL_ERROR,{getInstanceName() + " failed for \n" + System.System.toString(system)});
        then fail();
      end match;
    end fromSystem;

    function fromStrongComponent
      input StrongComponent comp;
      output Block blck;
      input output SimCode.SimCodeIndices simCodeIndices;
    algorithm
      blck := match comp
        local
          StrongComponent qual;
          Tearing strict;
          NonlinearSystem system;
          list<Block> result = {}, eqns = {};
          list<ComponentRef> crefs = {};
          Block tmp;
          Pointer<Variable> varPtr;
          Variable var;

        case qual as StrongComponent.SINGLE_EQUATION()
          algorithm
            (tmp, simCodeIndices) := createEquation(Pointer.access(qual.var), Pointer.access(qual.eqn), simCodeIndices);
        then tmp;

        case qual as StrongComponent.SINGLE_ARRAY(vars = {varPtr})
          algorithm
            (tmp, simCodeIndices) := createEquation(Pointer.access(varPtr), Pointer.access(qual.eqn), simCodeIndices);
        then tmp;

        case qual as StrongComponent.TORN_LOOP(strict = strict)
          algorithm
            for eqn_ptr in strict.residual_eqns loop
              (tmp, simCodeIndices) := createResidual(Pointer.access(eqn_ptr), simCodeIndices);
              eqns := tmp :: eqns;
            end for;
            for var_ptr in strict.iteration_vars loop
              var := Pointer.access(var_ptr);
              var.backendinfo := BackendExtension.BackendInfo.setVarKind(var.backendinfo, BackendExtension.LOOP_ITERATION());
              Pointer.update(var_ptr, var);
              crefs := var.name :: crefs;
            end for;
            // ToDo: correct the following values: size, homotopy, torn
            system := NONLINEAR_SYSTEM(simCodeIndices.equationIndex, listReverse(eqns), listReverse(crefs), simCodeIndices.nonlinearSystemIndex, listLength(crefs), NONE(), false, qual.mixed, true);
            simCodeIndices.nonlinearSystemIndex := simCodeIndices.nonlinearSystemIndex + 1;
            simCodeIndices.equationIndex := simCodeIndices.equationIndex + 1;
        then NONLINEAR(system, NONE());

      end match;
    end fromStrongComponent;

    function createResidual
      input BEquation.Equation eqn;
      output Block blck;
      input output SimCode.SimCodeIndices simCodeIndices;
    algorithm
      blck := match eqn
        local
          BEquation.Equation qual;
          Type ty;
          Operator operator;
          Expression lhs, rhs;
          Block tmp;

        case qual as BEquation.SCALAR_EQUATION()
          algorithm
            operator := Operator.OPERATOR(Expression.typeOf(qual.lhs), NFOperator.Op.SUB);
            tmp := RESIDUAL(simCodeIndices.equationIndex, Expression.BINARY(qual.lhs, operator ,qual.rhs), qual.source, qual.attr);
            simCodeIndices.equationIndex := simCodeIndices.equationIndex + 1;
        then tmp;

        case qual as BEquation.ARRAY_EQUATION()
          algorithm
            operator := Operator.OPERATOR(Expression.typeOf(qual.lhs), NFOperator.Op.SUB);
            tmp := ARRAY_RESIDUAL(simCodeIndices.equationIndex, Expression.BINARY(qual.lhs, operator, qual.rhs), qual.source, qual.attr);
            simCodeIndices.equationIndex := simCodeIndices.equationIndex + 1;
        then tmp;

        case qual as BEquation.SIMPLE_EQUATION()
          algorithm
            ty := ComponentRef.getComponentType(qual.lhs);
            operator := Operator.OPERATOR(ty, NFOperator.Op.SUB);
            lhs := Expression.fromCref(qual.lhs);
            rhs := Expression.fromCref(qual.rhs);
            if Type.isArray(ty) then
              tmp := ARRAY_RESIDUAL(simCodeIndices.equationIndex, Expression.BINARY(lhs, operator, rhs), qual.source, qual.attr);
            else
              tmp := RESIDUAL(simCodeIndices.equationIndex, Expression.BINARY(lhs, operator ,rhs), qual.source, qual.attr);
            end if;
            simCodeIndices.equationIndex := simCodeIndices.equationIndex + 1;
        then tmp;

        // ToDo: add all other cases!

        else algorithm
          Error.addMessage(Error.INTERNAL_ERROR,{getInstanceName() + " failed for \n" + BEquation.Equation.toString(eqn)});
        then fail();

      end match;
    end createResidual;

    function createEquation
      "Creates a single equation"
      input BVariable.Variable var;
      input BEquation.Equation eqn;
      output Block blck;
      input output SimCode.SimCodeIndices simCodeIndices;
    algorithm
      blck := match eqn
        local
          BEquation.Equation qual;
          Type ty;
          Operator operator;
          Expression lhs, rhs;
          Block tmp;

        case qual as BEquation.SCALAR_EQUATION()
          algorithm
            operator := Operator.OPERATOR(Expression.typeOf(qual.lhs), NFOperator.Op.SUB);
            tmp := SIMPLE_ASSIGN(simCodeIndices.equationIndex, var.name, Expression.BINARY(qual.lhs, operator, qual.rhs), qual.source, qual.attr);
            simCodeIndices.equationIndex := simCodeIndices.equationIndex + 1;
        then tmp;

        case qual as BEquation.ARRAY_EQUATION()
          algorithm
            operator := Operator.OPERATOR(Expression.typeOf(qual.lhs), NFOperator.Op.SUB);
            tmp := ARRAY_ASSIGN(simCodeIndices.equationIndex, Expression.fromCref(var.name), Expression.BINARY(qual.lhs, operator, qual.rhs), qual.source, qual.attr);
            simCodeIndices.equationIndex := simCodeIndices.equationIndex + 1;
        then tmp;

        // remove simple equations should remove this, but if it is not activated we need this
        case qual as BEquation.SIMPLE_EQUATION()
          algorithm
            ty := ComponentRef.getComponentType(qual.lhs);
            operator := Operator.OPERATOR(ty, NFOperator.Op.SUB);
            lhs := Expression.fromCref(qual.lhs);
            rhs := Expression.fromCref(qual.rhs);
            if Type.isArray(ty) then
              tmp := ARRAY_ASSIGN(simCodeIndices.equationIndex, Expression.fromCref(var.name), Expression.BINARY(lhs, operator, rhs), qual.source, qual.attr);
            else
              tmp := SIMPLE_ASSIGN(simCodeIndices.equationIndex, var.name, Expression.BINARY(lhs, operator, rhs), qual.source, qual.attr);
            end if;
            simCodeIndices.equationIndex := simCodeIndices.equationIndex + 1;
        then tmp;

        // ToDo: add all other cases!

        else algorithm
          Error.addMessage(Error.INTERNAL_ERROR,{getInstanceName() + " failed for \n" + BEquation.Equation.toString(eqn)});
        then fail();

      end match;
    end createEquation;

    function traverseCreateEquation
      "Only works, if the variable to solve for is saved in equation attributes!
      used for jacobians and hessians."
      input output BEquation.Equation eqn;
      input Pointer<list<Block>> acc;
      input Pointer<SimCode.SimCodeIndices> indices_ptr;
    protected
      Pointer<Variable> residualVar;
      Block blck;
      SimCode.SimCodeIndices indices;
    algorithm
      try
        residualVar := BEquation.EquationAttributes.getResidualVar(BEquation.Equation.getAttributes(eqn));
        (blck, indices) := createEquation(Pointer.access(residualVar), eqn, Pointer.access(indices_ptr));
        Pointer.update(acc, blck :: Pointer.access(acc));
        Pointer.update(indices_ptr, indices);
      else
        Error.addMessage(Error.INTERNAL_ERROR,{getInstanceName() + " failed for \n" + BEquation.Equation.toString(eqn)});
        fail();
      end try;
    end traverseCreateEquation;

    function createAssignment
      "Creates an assignment equation."
      input BEquation.Equation eqn;
      output Block blck;
      input output SimCode.SimCodeIndices simCodeIndices;
    algorithm
      blck := match eqn
        local
          BEquation.Equation qual;
          Type ty;
          Operator operator;
          SimVar residualVar;
          ComponentRef cref;
          Expression lhs, rhs;
          Block tmp;

        case qual as BEquation.SCALAR_EQUATION(lhs = Expression.CREF(cref = cref))
          algorithm
            tmp := SIMPLE_ASSIGN(simCodeIndices.equationIndex, cref, qual.rhs, qual.source, qual.attr);
            simCodeIndices.equationIndex := simCodeIndices.equationIndex + 1;
        then tmp;

        case qual as BEquation.ARRAY_EQUATION(lhs = Expression.CREF(cref = cref))
          algorithm
            tmp := SIMPLE_ASSIGN(simCodeIndices.equationIndex, cref, qual.rhs, qual.source, qual.attr);
            simCodeIndices.equationIndex := simCodeIndices.equationIndex + 1;
        then tmp;

        // remove simple equations should remove this, but if it is not activated we need this
        case qual as BEquation.SIMPLE_EQUATION()
          algorithm
            tmp := SIMPLE_ASSIGN(simCodeIndices.equationIndex, qual.lhs, Expression.fromCref(qual.rhs), qual.source, qual.attr);
            simCodeIndices.equationIndex := simCodeIndices.equationIndex + 1;
        then tmp;

        // ToDo: add all other cases!

        else algorithm
          Error.addMessage(Error.INTERNAL_ERROR,{getInstanceName() + " failed for \n" + BEquation.Equation.toString(eqn)});
        then fail();

      end match;
    end createAssignment;

    function collectAlgebraicLoops
      input list<list<Block>> blcks;
      input output list<Block> linearLoops;
      input output list<Block> nonlinearLoops;
    algorithm
      for blck_lst in blcks loop
        for blck in blck_lst loop
          (linearLoops, nonlinearLoops) := match blck
            case LINEAR()     then (blck :: linearLoops, nonlinearLoops);
            case NONLINEAR()  then (linearLoops, blck :: nonlinearLoops);
                              else (linearLoops, nonlinearLoops);
          end match;
        end for;
      end for;
    end collectAlgebraicLoops;

    function convert
      input Block blck;
      output OldSimCode.SimEqSystem oldBlck;
    algorithm
      oldBlck := match blck
        local
          Block qual;
        case qual as RESIDUAL()         then OldSimCode.SES_RESIDUAL(qual.index, Expression.toDAE(qual.exp), qual.source, BEquation.EquationAttributes.convert(qual.attr));
        case qual as ARRAY_RESIDUAL()   then OldSimCode.SES_RESIDUAL(qual.index, Expression.toDAE(qual.exp), qual.source, BEquation.EquationAttributes.convert(qual.attr));
        case qual as SIMPLE_ASSIGN()    then OldSimCode.SES_SIMPLE_ASSIGN(qual.index, ComponentRef.toDAE(qual.lhs), Expression.toDAE(qual.rhs), qual.source, BEquation.EquationAttributes.convert(qual.attr));
        case qual as ARRAY_ASSIGN()     then OldSimCode.SES_ARRAY_CALL_ASSIGN(qual.index, Expression.toDAE(qual.lhs), Expression.toDAE(qual.rhs), qual.source, BEquation.EquationAttributes.convert(qual.attr));
        // ToDo: add all the other cases here!
        case qual as NONLINEAR()        then OldSimCode.SES_NONLINEAR(NonlinearSystem.convert(qual.system), NONE(), BackendDAE.EQ_ATTR_DEFAULT_UNKNOWN /* dangerous! */);
        else algorithm
          Error.addMessage(Error.INTERNAL_ERROR,{getInstanceName() + " failed for \n" + toString(blck)});
        then fail();
      end match;
    end convert;

    function convertList
      input list<Block> blck_lst;
      output list<OldSimCode.SimEqSystem> oldBlck_lst = {};
    algorithm
      for blck in blck_lst loop
        oldBlck_lst := convert(blck) :: oldBlck_lst;
      end for;
      oldBlck_lst := listReverse(oldBlck_lst);
    end convertList;

    function convertListList
      input list<list<Block>> blck_lst_lst;
      output list<list<OldSimCode.SimEqSystem>> oldBlck_lst_lst = {};
    algorithm
      for blck_lst in blck_lst_lst loop
        oldBlck_lst_lst := convertList(blck_lst) :: oldBlck_lst_lst;
      end for;
      oldBlck_lst_lst := listReverse(oldBlck_lst_lst);
    end convertListList;
  end Block;

  uniontype LinearSystem
    record LINEAR_SYSTEM
      Integer index;
      Boolean mixed;
      Boolean torn;
      list<SimVar> vars;
      list<Expression> beqs; //ToDo what is this? binding expressions?
      list<tuple<Integer, Integer, Block>> simJac; // ToDo: is this the old jacobian structure?
      /* solver linear tearing system */
      list<Block> residual;
      Option<SimJacobian> jacobian;
      list<DAE.ElementSource> sources;
      Integer indexSystem;
      Integer size "Number of variables that are solved in this system. Needed because 'crefs' only contains the iteration variables.";
      Boolean partOfJac "if TRUE then this system is part of a jacobian matrix";
    end LINEAR_SYSTEM;

    function toString
      input LinearSystem system;
      input output String str;
    algorithm
      str := "Linear System (size = " + intString(system.size) + ", jacobian = " + boolString(system.partOfJac) + ", mixed = " + boolString(system.mixed) + ", torn = " + boolString(system.torn) + ")\n" + Block.listToString(system.residual, str + "--");
    end toString;

/* ToDo finish this! not important for now
    function convert
      input LinearSystem system;
      output OldSimCode.LinearSystem oldSystem;
    protected
      list<DAE.ComponentRef> crefs = {};
    algorithm
      for cref in system.crefs loop
        crefs := ComponentRef.toDAE(cref) :: crefs;
      end for;
      oldSystem := OldSimCode.LINEARSYSTEM(
        index                 = system.index,
        partOfMixed           = system.mixed,
        tornSystem            = system.torn,
        eqs                   = {}, // ToDo: update this with block update!
        crefs                 = listReverse(crefs),
        indexNonLinearSystem  = system.indexSystem,
        nUnknowns             = system.size,
        jacobianMatrix        = NONE(), // ToDo update this!
        homotopySupport       = system.homotopy,
        clockIndex            = NONE() // ToDo update this
        );
    end convert;
    */
  end LinearSystem;

  uniontype NonlinearSystem
    record NONLINEAR_SYSTEM
      Integer index;
      list<Block> blcks;
      list<ComponentRef> crefs;
      Integer indexSystem;
      Integer size "Number of variables that are solved in this system. Needed because 'crefs' only contains the iteration variables.";
      Option<SimJacobian> jacobian;
      Boolean homotopy;
      Boolean mixed;
      Boolean torn;
    end NONLINEAR_SYSTEM;

    function toString
      input NonlinearSystem system;
      input output String str;
    algorithm
      str := "Nonlinear System (size = " + intString(system.size) + ", homotopy = " + boolString(system.homotopy) + ", mixed = " + boolString(system.mixed) + ", torn = " + boolString(system.torn) + ")\n" + Block.listToString(system.blcks, str + "--");
    end toString;

    function convert
      input NonlinearSystem system;
      output OldSimCode.NonlinearSystem oldSystem;
    protected
      list<DAE.ComponentRef> crefs = {};
    algorithm
      for cref in system.crefs loop
        crefs := ComponentRef.toDAE(cref) :: crefs;
      end for;
      oldSystem := OldSimCode.NONLINEARSYSTEM(
        index                 = system.index,
        eqs                   = Block.convertList(system.blcks),
        crefs                 = listReverse(crefs),
        indexNonLinearSystem  = system.indexSystem,
        nUnknowns             = system.size,
        jacobianMatrix        = NONE(), // ToDo update this!
        homotopySupport       = system.homotopy,
        mixedSystem           = system.mixed,
        tornSystem            = system.torn,
        clockIndex            = NONE() // ToDo update this
        );
    end convert;
  end NonlinearSystem;

  annotation(__OpenModelica_Interface="backend");
end NSimStrongComponent;