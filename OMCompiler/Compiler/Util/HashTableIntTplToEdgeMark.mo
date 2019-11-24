/*
 * This file is part of OpenModelica.
 *
 * Copyright (c) 1998-2014, Open Source Modelica Consortium (OSMC),
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
encapsulated package HashTableIntTplToEdgeMark
/* Below is the instance specific code. For each hashtable the user must define:

Key       - The key used to uniquely define elements in a hashtable
Value     - The data to associate with each key
hashFunc   - A function that maps a key to a positive integer.
keyEqual   - A comparison function between two keys, returns true if equal.
*/

/* HashTable instance specific code */

import BaseHashTable;
import BackendDAE;
import BackendDump;
import Error.addInternalError;

type Key = tuple<Integer, Integer>;
type Value = BackendDAE.EdgeMark;

protected

public

type HashTableCrefFunctionsType = tuple<FuncHashCref,FuncCrefEqual,FuncCrefStr,FuncExpStr>;
type HashTable = tuple<
  array<list<tuple<Key,Integer>>>,
  tuple<Integer,Integer,array<Option<tuple<Key,Value>>>>,
  Integer,
  HashTableCrefFunctionsType
>;

/* ugly hack functions */
partial function FuncHashCref
  input Key cr;
  input Integer mod;
  output Integer res;
end FuncHashCref;

partial function FuncCrefEqual
  input Key cr1;
  input Key cr2;
  output Boolean res;
end FuncCrefEqual;

partial function FuncCrefStr
  input Key cr;
  output String res;
end FuncCrefStr;

partial function FuncExpStr
  input Value exp;
  output String res;
end FuncExpStr;

/* actual functions */
function FuncHashIntTpl
  input Key intTpl;
  input Integer mod;
  output Integer res;
protected
  Integer h;
algorithm
  // hash might overflow => force positive
  h := intAbs(hashIntTpl(intTpl));
  res := intMod(h,mod);
end FuncHashIntTpl;

function hashIntTpl
  input Key intTpl;
  output Integer hash;
protected
  Integer i1, i2;
algorithm
  try
    (i1, i2) := intTpl;
    // kabdelhak: find better hash function or factor. 123456 is arbitrary
    hash := i1 + i2*123456;
  else
    Error.addMessage(Error.INTERNAL_ERROR,{"- HashTableIntTplToEdgeMark.hashIntTpl failed\n"});
    fail();
  end try;
end hashIntTpl;

function FuncIntTplEqual
  input Key intTpl1;
  input Key intTpl2;
  output Boolean res;
algorithm
  res := match (intTpl1, intTpl2)
    local
      Integer i11, i12, i21, i22;
    case ((i11, i12), (i21, i22)) guard((i11 == i21) and (i12 == i22)) then true;
    case ((i11, i12), (i21, i22)) then false;
    else
      algorithm
        Error.addMessage(Error.INTERNAL_ERROR,{"- HashTableIntTplToEdgeMark.FuncIntTplEqual failed\n"});
    then fail();
  end match;
end FuncIntTplEqual;

function FuncIntTplStr
  input Key intTpl;
  output String res;
protected
  Integer i1, i2;
algorithm
  try
    (i1, i2) := intTpl;
    res := "(" + intString(i1) + "," + intString(i2) + ")";
  else
    Error.addMessage(Error.INTERNAL_ERROR,{"- HashTableIntTplToEdgeMark.FuncIntTplStr failed\n"});
    fail();
  end try;
end FuncIntTplStr;

function emptyHashTable
"Returns an empty HashTable.
 Using the default bucketsize."
  output HashTable hashTable;
algorithm
  hashTable := emptyHashTableSized(BaseHashTable.defaultBucketSize);
end emptyHashTable;

function emptyHashTableSized
"Returns an empty HashTable.
 Using the bucketsize size."
  input Integer size;
  output HashTable hashTable;
algorithm
  hashTable := BaseHashTable.emptyHashTableWork(size,(FuncHashIntTpl, FuncIntTplEqual, FuncIntTplStr, BackendDump.edgeMarkStr));
end emptyHashTableSized;

annotation(__OpenModelica_Interface="backend");
end HashTableIntTplToEdgeMark;