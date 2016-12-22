# <strong>R</strong>everse <strong>P</strong>olish <strong>N</strong>otation <strong>Calculator</strong>

## Overview
<p> This program solves proper reverse polish notation expressions
and prints out the answer.

<p> proper reverse polish notation - a formula that contains a proper reverse polish notation
expression or number then a space then another proper reverse polish notation expression or number
then a space and then one of the operations +, -, * or /.

## Input
<p> This program is designed to be ran from the command prompt. To run it
you put the name of the file and the proper reverse polish notation expression
you wish to solve in quotations.

### Example
`C:\Users\name\Desktop>RPNCalculator.exe "3 3 +"`

## Output
<p> This program will output either an error message if formula entered is 
not a proper reverse polish notation expression or the answer to the proper
reverse polish notation expression entered.

#Examples
`C:\Users\name\Desktop>RPNCalculator.exe "3 3 +"`
`3 3 + = 6.000`

`C:\Users\name\Desktop>RPNCalculator.exe 3 3 +`
`Too many arguments entered.`

`C:\Users\name\Desktop>RPNCalculator.exe`
`Not enough arguments entered.`

`C:\Users\name\Desktop>RPNCalculator.exe "3 3 ^"`
`Error: ^ is not a valid operator.`

`C:\Users\name\Desktop>RPNCalculator.exe "3 3"`
`Error: Not the correct number of operands for the number of operators.`