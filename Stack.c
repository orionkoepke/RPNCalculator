/*
 * Author: Orion Koepke
 * Date Last Edited: 12/18/16
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
    Node* newHead = (Node *) malloc(sizeof(Node));
    newHead->num = num;
    newHead->next = stack->head;
    stack->head = newHead;
    stack->length = stack->length + 1;
}

/* double peek(Stack stack)
 * stack - the current stack
 * This function returns the number in the head node of the stack.
 */
double peek(Stack stack)
{
    if(stack.head != 0)
    {
        return stack.head->num;
    }
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
    if (stack->head != 0)
    {
        Node* head = stack->head;
        stack->head = head->next;
        stack->length = stack->length - 1;
        head->next = 0;
        free(head);
    }
}

/* void popAll(Stack* stack, double num)
 * Stack* stack - the current stack
 * This function frees the whole stack.
 */
//TODO Fix This
void popAll(Stack* stack)
{
    printf("length :: %i\n", stack->length);
    if(stack->head != 0)
    {
        pop(stack);
        popAll(stack);
    }
}
