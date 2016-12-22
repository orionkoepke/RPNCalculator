/*
 * Author: Orion Koepke
 * Date Last Edited: 12/22/16
 */

#include <stdio.h>
#include "Solver.h"

/* int correctNumArgs(int argc)
 * int argc - the number of arguments in argv from main
 * This function returns 0 and prints an error message if argc does not equal 2
 * and returns 1 otherwise.
 */
int correctNumArgs(int argc)
{
    //If argc is less than 2
    if(argc < 2)
    {
        //Print error messsage and return 0.
        printf("Not enough argumnets entered.\n");
        return 0;
    }
        //Else if argc is greater than 2
    else if(argc > 2)
    {
        //Print error messsage and return 0.
        printf("Too many arguments entered.\n");
        return 0;
    }
        //Else argc is the correct number and argv has the correct number of arguments.
    else {
        return 1;
    }
}

/* int main(int argc, const char* argv[])
 * int argc - the number of argumnets in argv.
 * const char* argv[0] - the name of the executable file
 * const char* argv[1] - the reverse polish notation expression to be solved
 * This function prints the value of the solved reverse polish notation expression in argv[1] and returns 1, if
 * argv[1] is a proper reverse polish notation expression and argc equals 2, and prints an error message and
 * returns 0 otherwise.
 *      proper reverse polish notation expression - a formula that contains a proper reverse polish notation
 *      expression or number then a space then another proper reverse polish notation expression or number
 *      then a space and then one of the operations +, -, * or /.
 */
int main(int argc, const char* argv[])
{
    double output = 0;

    //If there are the correct number of arguments in argv and getOutput was able to run on argv[1] without error
    if(correctNumArgs(argc) && getOutput(argv[1], &output))
    {
        //Print argv[1] " = " output
        printf("%s = %.3lf\n", argv[1], output);
        return 1;
    }
        //Else there is an error
    else
    {
        return 0;
    }
}
