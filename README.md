# Turing Machine Interpreter

## Usage
`TuringInterpreter.exe <fileName=input.txt> <flag=arrow-state>`

### File Contents
```
<number of iterations>
<initial tape>
<starting head position>
<starting m-config>
<m-config label> | <symbol>,... | <action>,... | <target m-config>
<m-config label> | <symbol>,... | <action>,... | <target m-config>
...
```

### Flag Options

* tape
  * Outputs the final tape.
* f-squares
  * Outputs only the f-squares of the final tape.
* state
  * Outputs the final state as Turing defined.
* arrow-state
  * Outputs the final state in an easier to read format.
* halts
  * Outputs whether the machine halts in the specified number of iterations.
* trace
  * Outputs a trace similar to what is presented in Turing's paper.
* arrow-trace
  * Outputs an easier to read trace.
* utm-out
  * Outputs the symbols on the tape that would be the output from a UTM execution.


## Instruction Manual

### 1 Introduction

This program was written to aid in the understanding of Turing Machines. It does so by allowing the user
to execute Turing Machines and trace their execution. It was specifically designed to allow the execution
of Turing Machines as they are defined in Turing’s paper _On Computable Numbers, with an Application
to The Entscheidungsproblem_.

Though the interpreter is limited to only the printable ASCII characters as symbols on the tape, any
Turing Machine presented in the paper can be executed with this interpreter. In fact, some of the
machines presented in the paper are presented in executable format as an appendix to this document.

## 2 Turing Machine File Format

A text file is used to describe an input Turing Machine.

```text
30

1
b
//Computes the raitonal number .0101010101...
b | none | P0, R | c
c | none | R | e
e | none | P1, R | f
f | none | R | b
```

_Figure 1 : Sample Turing Machine_

An input file consists of the following:

```
a) The first line contains an integer specifying the number of iterations to execute the machine.
b) The second line specifies the initial tape of the machine.
c) The third line contains an integer specifying the initial position of the head of the machine.
d) The fourth line specifies the initial m-config of the machine.
e) The remaining lines contain the rules of the machine or a comment, one on each line. Blank lines
are ignored.
i. A line is specified to be a comment if it starts with two forward slashes (//).
```
### 2.1 Tape

The initial tape is a sequence of characters and blanks (‘_’). The initial tape specified in the file begins at
index 1. It is possible for a Turing Machine to step past the beginning of the tape during execution.
Anything before and after what is specified by the initial tape is assumed to be blank.


### 2.2 Rules

_Figure 2 : Sample Rule_

Every rule consists of four parts separated by a pipe (|):

```
a) The first part is the name of the m-config or the m-function declaration.
b) The second part is the specification of the scanned symbols. This is a, possibly empty, list of
symbols, variable names, and keywords.
c) The third part is the specification of the actions to perform. This is a, possibly empty, list of print
commands, erase commands, and move commands.
d) The fourth part specifies the target m-config or m-function.
```
#### 2.2.1 Rule Name

The first part of a rule is the name of the m-configuration, specified as, possibly zero-ary, m-function
declaration. For an overview of how these m-functions work please see section _“4. Abbreviated Tables”_
starting on page 235 of Turing’s paper.

An m-function declaration is of the form:

For a zero-ary m-function, the parentheses can be dropped.

#### 2.2.2 Scanned Symbols

The list of scanned symbols is specified using keywords (none, any), variable names, and single
characters each separated by a comma.

```
 An empty scanned symbol list matches anything.
 ‘none’ matches only a bank square (‘_’).
 ‘any’ matches any symbol except a blank.
 A symbol matches that symbol on a square.
 A variable matches whatever symbol the variable is instantiated with.
 The scanned symbols list matches a symbol if any element of the list matches the symbol.
```
Matching of rules goes from top to bottom. If two rules meet the selection criteria (correct m-config and
scanned symbol), the rule that occurs highest in the file is chosen.

#### 2.2.3 Actions

The list of actions is specified as a list of commands in one of three forms (Print, Erase, and Move) each
separated by a comma. The actions are performed one at a time in the order they are specified.


_2.2.3.1 Print_
Print actions are specified by a capital _‘P’_ followed by the symbol or variable to print. This action
overwrites the currently scanned square on the tape with the specified symbol. If ‘P’ is followed by
something longer than a single symbol, that is not a variable, only the first character is printed.

_2.2.3.2 Erase_
The erase action is specified by a capital _‘E’_. This action erases the symbol on the currently scanned
square leaving a blank or ‘_’.

_2.2.3.3 Move_
A move action is specified by either a capital _‘L’_ or _‘R’_. _‘L’_ moves the scanned square once to the left and
‘R’ moves it once to the right.

#### 2.2.4 Target

The rule target specifies the next m-configuration the machine will move to. This is specified in terms of
instantiated m-functions or the keyword _‘halt’_. When instantiating an m-function the user can make use
of the _‘scanned’_ keyword, which is substituted by the currently scanned symbol during execution.

### 2.3 A Brief Example

The following Turing machine copies the initially scanned symbol to the end of the tape and then halts.

_Figure 3 : Brief Example Turing Mschine_

Below is the output of the execution trace. Each step in the execution of the machine is illustrated by
the current tape, the current m-config, and an indicator showing which square is currently scanned.


## 3 Using the Program

_Figure 4 : Command Line Format_

The Turing Machine Interpreter is used by passing three command-line arguments.

```
a) The first argument, <filename> , specifies the location of the Turing Machine file to execute.
b) The second argument, <outputFlag> , specifies the desired output. This argument is optional. It’s
default value is “arrow-state”
c) If the user would like to use the interpreter in interactive mode the third argument,
<interactive> , is passed ‘-i’. This argument is optional and by default the interpreter does not run
in interactive mode.
```

### 3.1 Output Flag

The output flag is used to specify what information to display.

Possible Values:

1. tape:
    The flag ‘tape’ is used to show the contents of the tape after the specified number of iterations
    have been executed.
2. f-squares:
    The flag ‘f-squares’ is used to show the contents of the f-squares (as defined by Turing on page
    235 of his paper) in the tape after the specified number of iterations have been executed.
3. arrow-state:
    The flag ‘arrow-state’ is used to show the final state of the Turing Machine, in an easy to read
    format, after the specified number of iterations have been executed. The format shows the final
    tape, the final m-config, and an indicator showing which square is scanned.
4. state:
    The flag ‘state’ is used to show the final state of the Turing Machine, in a simpler format, after
    the specified number of iterations have been executed. The format shows final m-config, the
    index of which square is scanned, and the final tape.


5. arrow-trace:
    The flag ‘arrow-trace’ is used to show the execution trace of the machine. Each step in the
    execution of the machine is illustrated by the formatted ‘arrow-state’.

##### ⋮

6. halts:
    The flag ‘halts’ is used to show whether the machine reaches the built-in _‘halt’_ m-config_._
    Outputs ‘true’ if _‘halt’_ is reached and false otherwise.


7. trace:
    The flag ‘trace’ is used to show the execution trace of the machine. Each step in the execution of
    the machine is illustrated by the simple ‘state’ format.
8. utm-out:
    The flag ‘utm-out’ is used to show the contents of the tape that would be the output of Turing’s
    Universal Machine as defined on pages 241 through 246.


### 3.2 Interactive Mode

Interactive mode allows the user to continuously execute the input Turing machine, seeing the partial
output between executions. To start the interpreter in interactive mode, include the third command line
argument “-i”. If the “-i” is not provided, the machine will execute only the number of iterations
specified in the file.

When started in interactive mode, the interpreter will execute the given Turing machine the number of
times specified in the file. It will then ask the user to enter the next number of iterations to continue
execution. This repeats until the user enters some number less than 1 or the Turing machine reaches the
_‘halt’_ state or the target m-config is not defined.


## 4 Appendix

### 4.1 Machine Which Computes a Rational Number

Presented on page 233.

Modified and presented again on page 234.


### 4.2 Machine Which Computes an Irrational Number

Presented on page 234.



