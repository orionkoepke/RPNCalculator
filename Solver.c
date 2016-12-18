/*
 * Author: Orion Koepke
 * Date Last Edited: 12/18/16
 */

#include "Solver.h"
#include "Stack.h"

double preformOperation(double firstNum, double secondNum, char* operator)
{
    double answer = 0;

    if(strcmp(operator, "+") == 0)
    {
        answer = firstNum + secondNum;
    }
    else if(strcmp(operator, "-") == 0)
    {
        answer = firstNum - secondNum;
    }
    else if(strcmp(operator, "*") == 0)
    {
        answer = firstNum * secondNum;
    }
    else if(strcmp(operator, "/") == 0)
    {
        if(secondNum != 0)
        {
            answer = firstNum / secondNum;
        }
    }

    return answer;
}

double getOutput(char* input)
{
    Stack stack;
    double firstNum;
    double secondNum;
}