// name: WhenVariableMismatch4
// keywords:
// status: incorrect
//
// An if-equation without else inside a when-equation does not assign the
// variables if no condition is true.

model WhenVariableMismatch4
  discrete Real x;
equation
  when time > 0 then
    if time > 1 then
      x = 1;
    elseif time > 0.5 then
      x = 2;
    end if;
  end when;
end WhenVariableMismatch4;

// Result:
// Error processing file: WhenVariableMismatch4.mo
// [flattening/modelica/scodeinst/WhenVariableMismatch4.mo:12:5-16:11:writable] Error: The branches of an if-equation inside a when-equation must have the same set of component references on the left-hand side.
//
// # Error encountered! Exiting...
// # Please check the error message and the flags.
//
// Execution failed!
// endResult
