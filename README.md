# TuringMachineInterpreter
Interpreter for Turing Machines as presented in Turing's 1936 paper.

Usage:
TuringInterpreter.exe <fileName=input.txt> <flag=arrow-state>

File Contents:--------------------------------------------------------
<number of iterations>
<initial tape>
<starting head position>
<starting m-config>
<m-config label> | <symbol>,... | <action>,... | <target m-config>
<m-config label> | <symbol>,... | <action>,... | <target m-config>
...
----------------------------------------------------------------------

Flag Options:---------------------------------------------------------
'tape'
Outputs the final tape.
\n"
'f-squares'\n"
Outputs only the f-squares of the final tape.\n"
\n"
'state'\n"
Outputs the final state as Turing defined.\n"
\n"
'arrow-state'\n"
Outputs the final state in an easier to read format.\n"
\n"
'halts'\n"
Outputs whether the machine halts in the specified number of iterations.\n"
\n"
'trace'\n"
Outputs a trace similar to what is presented in Turing's paper. \n"
\n"
'arrow-trace'\n"
Outputs an easier to read trace.\n"
\n"
'utm-out'\n"
Outputs the symbols on the tape that would be the output from a UTM execution.\n"
\n"
----------------------------------------------------------------------\n"
