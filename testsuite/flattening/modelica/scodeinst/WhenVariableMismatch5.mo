// name: WhenVariableMismatch5
// keywords:
// status: incorrect
//
// The branches of an if-equation inside a when-equation without elsewhen
// assign different variables.

model WhenVariableMismatch5
  discrete Real x, y;
equation
  when time > 0 then
    if time > 1 then
      x = 1;
    else
      y = 2;
    end if;
  end when;
end WhenVariableMismatch5;

// Result:
// Error processing file: WhenVariableMismatch5.mo
// [flattening/modelica/scodeinst/WhenVariableMismatch5.mo:12:5-16:11:writable] Error: The branches of an if-equation inside a when-equation must have the same set of component references on the left-hand side.
//
// # Error encountered! Exiting...
// # Please check the error message and the flags.
//
// Execution failed!
// endResult
