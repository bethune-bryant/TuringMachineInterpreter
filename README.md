# Turing Machine Interpreter
This program was written to aid in the understanding of Turing Machines.
It does so by allowing the user to execute Turing Machines and trace their execution.
It was specifically designed to allow the execution of Turing Machines as they are 
defined in Turing’s paper On Computable Numbers, with an Application to The Entscheidungsproblem.

## Usage
`TuringInterpreter.exe <fileName=input.txt> <flag=arrow-state>`

## File Contents
```
<number of iterations>
<initial tape>
<starting head position>
<starting m-config>
<m-config label> | <symbol>,... | <action>,... | <target m-config>
<m-config label> | <symbol>,... | <action>,... | <target m-config>
...
```

## Flag Options
```
'tape'
Outputs the final tape.
'f-squares'
Outputs only the f-squares of the final tape.
'state'
Outputs the final state as Turing defined.
'arrow-state'
Outputs the final state in an easier to read format.
'halts'
Outputs whether the machine halts in the specified number of iterations.
'trace'
Outputs a trace similar to what is presented in Turing's paper.
'arrow-trace'
Outputs an easier to read trace.
'utm-out'
Outputs the symbols on the tape that would be the output from a UTM execution.
```
