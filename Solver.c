/*
 * Author: Orion Koepke
 * Date Last Edited: 12/18/16
 */

#include "Solver.h"
#include "Stack.h"

#include <string.h>
#include <stdio.h>

int isOperator(char* operator)
{
    int answer = 0;

    if(strcmp(operator, "+") == 0)
    {
        answer = 1;
    }
    else if(strcmp(operator, "-") == 0)
    {
        answer = 1;
    }
    else if(strcmp(operator, "/") == 0)
    {
        answer = 1;
    }
    else if(strcmp(operator, "*") == 0)
    {
        answer = 1;
    }

    return answer;
}

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

int isNumber(char* string)
{
    double value;

    if(sscanf(string, "%lf", &value) == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

double getNumber(char* string)
{
    double value;

    if(sscanf(string, "%lf", &value) == 1)
    {
        return value;
    }
    else
    {
        return 0;
    }
}


double getOutput(char* input)
{
    Stack stack;
    double firstNum;
    double secondNum;
    char* token;

    token = strtok(input, " ");

    while(token)
    {
        if(isNumber(token))
        {
            push(&stack, getNumber(token));
        }
        else if(isOperator(token))
        {
            secondNum = peek(stack);
            pop(&stack);
            firstNum = peek(stack);
            pop(&stack);
            push(&stack, preformOperation(firstNum, secondNum, token));
        }
        else
        {
            printf("Error\n");
            return 0.00;
        }

        token = strtok(NULL, " ");
    }

    firstNum = peek(stack);
    pop(&stack);
    return firstNum;
}