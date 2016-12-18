/*
 * Author: Orion Koepke
 * Date Last Edited: 12/18/16
 */

#include "Stack.h"

#include <stdio.h>

void push(Stack* stack, double num)
{
    Node* newHead = (Node *) malloc(sizeof(Node));
    newHead->num = num;
    newHead->next = stack->head;
    stack->head = newHead;
    stack->length = stack->length + 1;
}

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
