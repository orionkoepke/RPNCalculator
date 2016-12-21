/*
 * Author: Orion Koepke
 * Date Last Edited: 12/18/16
 */

#include <stdio.h>
#include "Solver.h"

/* int correctNumArgs(int argc)
 * int argc - the number of arguments in argv from main
 * This function returns 0 and prints an error message if argc != 2
 * and returns 1 otherwise.
 */
int correctNumArgs(int argc)
{
    if(argc < 2)
    {
        printf("Not enough argumnets entered.\n");
        return 0;
    }
    else if(argc > 2)
    {
        printf("Too many arguments entered.\n");
        return 0;
    }
    else {
        return 1;
    }
}

/* int main(int argc, const char* argv[])
 * int argc - TODO ADD Discription
 * const char* argv[0] - the name of the executable file
 * const char* argv[1] - the reverse polish notation expression to be solved
 * This function prints the value of the solved reverse polish notation formula in argv[1] and returns 1, if
 * argv[1] is a proper reverse polish notation expression and argc equals 2, and print an error message and
 * returns 0 otherwise.
 *      proper reverse polish notation expression - a formula that contains a proper reverse polish notation
 *      expression or number then a space then another proper reverse polish notation expression or number
 *      then a space and then one of the operations +, -, * or /.
 */
int main(int argc, const char* argv[])
{
    if(correctNumArgs(argc))
    {
        //TODO add a way to see if the expression is in proper reverse polish notation form.
        printf("%s = %lf\n", argv[1], getOutput(argv[1]));
        return 1;
    }
    else
    {
        return 0;
    }
}
