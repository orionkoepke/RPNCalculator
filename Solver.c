/*
 * Author: Orion Koepke
 * Date Last Edited: 12/18/16
 */

#include <string.h>
#include <stdio.h>

#include "Solver.h"
#include "Stack.h"

/* int isNumber(char* string)
 * char* string - any string of characters
 * This function returns 1 if string contains a number and returns 0 otherwise.
 */
int isNumber(char* string)
{
    double value; //This is required for sscanf even though it is not used.

    //sscanf returns the number of variables that where able to be filled.
    if(sscanf(string, "%lf", &value) == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/* double getNumber(char* string)
 * char* string - any string of characters
 * This function returns the value of the number in string as a double and returns
 * 0 if no number exists in string.
 */
double getNumber(char* string)
{
    double value; //The value of the number that is in string.

    //sscanf puts the value of the number it finds in string into value and returns the number of variables
    //that it has filled.
    if(sscanf(string, "%lf", &value) == 1)
    {
        return value;
    }
    else
    {
        return 0;
    }
}

/* int isOperator(char* operator)
 * char* operator - a char* representing one of the operations '+', '-', '*', or '/'
 * This function returns 1 if operator is either a '+', '-', '*', or '/' and returns
 * 0 otherwise.
 */
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

/* double preformOperation(double firstNum, double secondNum, char* operator)
 * double firstNum - a double passed in to be the first number in the expression
 * double secondNum - a double passed in to be the second number in the experssion
 * char* operator - a char* representing one of the operations '+', '-', '*', or '/'
 * This function returns the value of firstNum operator secondNum as a double.
 */
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

/* double getOutput(char* input)
 * const char* input - an expression in reverse polish notation
 * This function takes in input and returns the value of input solved.
 */
double getOutput(const char* input)
{
    Stack stack;        //Where the values will be stored until they are needed.
    double firstNum;    //The first number in an expression when performing an operation.
    double secondNum;   //The second number in an expression when performing an operation.
    char* token;        //The number or operation the program is currently looking at.
    char inputCopy[strlen(input) + 1]; //A copy of input so input is not changed.

    //Copy input into inputCopy.
    strncpy(inputCopy, input, sizeof(inputCopy));

    //Load token with the first token in input delimited by " ".
    token = strtok(inputCopy, " ");

    //While token is not null.
    while(token)
    {
        //If token is a number: push the number onto stack.
        if(isNumber(token))
        {
            push(&stack, getNumber(token));
        }
            //Else if token is an operation pop two numbers off of stack and push the result back on stack.
        else if(isOperator(token))
        {
            secondNum = peek(stack);
            pop(&stack);
            firstNum = peek(stack);
            pop(&stack);
            push(&stack, preformOperation(firstNum, secondNum, token));
        }
            //There is an error: free the stack and return 0.
        else
        {
            printf("Error\n");

            //TODO: free the stack.

            return 0.00;
        }

        //Put the next token in input into token.
        token = strtok(NULL, " ");
    }

    //The number on the top of the stack is the answer to input.
    firstNum = peek(stack);
    pop(&stack);

    //TODO: Free the stack instead of just poping.

    return firstNum;
}