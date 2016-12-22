/*
 * Author: Orion Koepke
 * Date Last Edited: 12/22/16
 */

#include <string.h>
#include <stdio.h>
#include <malloc.h>

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

    //If operator is "+"
    if(strcmp(operator, "+") == 0)
    {
        answer = 1;
    }
        //else if operator is "-"
    else if(strcmp(operator, "-") == 0)
    {
        answer = 1;
    }
        //else if operator is "/"
    else if(strcmp(operator, "/") == 0)
    {
        answer = 1;
    }
        //else if operator is "*"
    else if(strcmp(operator, "*") == 0)
    {
        answer = 1;
    }

    //else operator is not a known operator and will return the default value 0.
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

    //If operator is "+"
    if(strcmp(operator, "+") == 0)
    {
        answer = firstNum + secondNum;
    }
        //else if operator is "-"
    else if(strcmp(operator, "-") == 0)
    {
        answer = firstNum - secondNum;
    }
        //else if operator is "*"
    else if(strcmp(operator, "*") == 0)
    {
        answer = firstNum * secondNum;
    }
        //else if operator is "/"
    else if(strcmp(operator, "/") == 0)
    {
        //If there is not going to be a divide by zero error
        if(secondNum != 0)
        {
            answer = firstNum / secondNum;
        }
    }

    //else operator is not a known operator and will return the default value 0.
    return answer;
}

/* double getOutput(const char* input, double* output)
 * const char* input - a proper reverse polish notation expression
 * double* output - the value of the proper reverse polish notation expression in input
 * This function puts the value of the reverse polish notation expression in input into output
 * and returns 1 if input is a proper reverse polish notation expression, and puts 0 in output
 * and returns 0 otherwise.
 */
double getOutput(const char* input, double* output)
{
    Stack stack;        //Where the values will be stored until they are needed.
    double firstNum;    //The first number in an expression when performing an operation.
    double secondNum;   //The second number in an expression when performing an operation.
    char* token;        //The number or operation the program is currently looking at.
    char inputCopy[strlen(input) + 1]; //A copy of input so input is not changed.

    //Initialize stack.
    stack = *((Stack*) malloc(sizeof(Stack)));
    stack.head = 0;
    stack.length = 0;

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
            //Get the second number off stack and remove it from stack.
            secondNum = peek(stack);
            pop(&stack);

            //Get the first number off stack and remove it from stack.
            firstNum = peek(stack);
            pop(&stack);

            //Push firstNum operand secondNum on to stack.
            push(&stack, preformOperation(firstNum, secondNum, token));
        }
            //There is an error: free the stack and return 0.
        else
        {
            //Print error.
            printf("Error: %s is not a valid operator.\n", token);

            //make output equal to zero.
            (*output) = 0;

            //Delete the stack.
            popAll(&stack);
            free(&stack);

            return 0;
        }

        //Put the next token in input into token.
        token = strtok(NULL, " ");
    }

    //If the stack has more than or less than one thing on it, there is an error.
    if(stack.length != 1)
    {
        //Print error.
        printf("Error: Not the correct number of operands for the number of operators.\n", token);

        //make output equal to zero.
        (*output) = 0;

        //Delete the stack.
        popAll(&stack);
        free(&stack);

        return 0;
    }
        //Else the answer to the reverse polish notation expression in input is the number on the top of the stack.
    else
    {
        //Make output equal to the number on the top of stack.
        (*output) = peek(stack);

        //Delete the stack.
        popAll(&stack);
        free(&stack);

        return 1;
    }
}