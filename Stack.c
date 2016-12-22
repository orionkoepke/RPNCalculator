/*
 * Author: Orion Koepke
 * Date Last Edited: 12/22/16
 */

#include <stdio.h>
#include <malloc.h>

#include "Stack.h"

/* void push(Stack* stack, double num)
 * Stack* stack - the current stack
 * double num - the number to be pushed on to the stack
 * This function creates a new node to store num and makes that node the new head
 * of stack and makes the old head of stack the next node of the new node.
 */
void push(Stack* stack, double num)
{
    //Initialize a new Node.
    Node* newHead = (Node *) malloc(sizeof(Node));
    newHead->num = num;
    newHead->next = stack->head;

    //Make the new Node the head of stack.
    stack->head = newHead;

    //Increase the length of stack by one.
    stack->length = stack->length + 1;
}

/* double peek(Stack stack)
 * stack - the current stack
 * This function returns the number in the head node of the stack.
 */
double peek(Stack stack)
{
    //If there is something on stack.
    if(stack.head != 0)
    {
        return stack.head->num;
    }
        //Else if there is nothing on the stack
    else
    {
        return 0;
    }
}

/* void pop(Stack* stack, double num)
 * Stack* stack - the current stack
 * This function makes the head of the stack be the next node of the current head and then
 * frees the current head.
 */
void pop(Stack* stack)
{
    //If there is something on stack.
    if (stack->head != 0)
    {
        //Get the current head of stack.
        Node* head = stack->head;

        //Make the head of the stack the next Node after the current head or null if there is no next Node.
        stack->head = head->next;

        //Subtract one from the length of stack.
        stack->length = stack->length - 1;

        //Free the current head of the stack.
        head->next = 0;
        free(head);
    }
}

/* void popAll(Stack* stack, double num)
 * Stack* stack - the current stack
 * This function frees the whole stack.
 */
void popAll(Stack* stack)
{
    //If there is something on stack.
    if(stack->head != 0)
    {
        //pop the current head of stack.
        pop(stack);

        //pop everything else off stack.
        popAll(stack);
    }
}
