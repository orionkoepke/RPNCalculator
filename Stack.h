/*
 * Author: Orion Koepke
 * Date Last Edited: 12/18/16
 */

#ifndef RPNCALCULATOR_STACK_H
#define RPNCALCULATOR_STACK_H

typedef struct node
{
    double num;
    struct node* next;
} Node;

typedef struct
{
    Node* head;
    int length;
} Stack;

void push(Stack* stack, double num);

double peek(Stack stack);

void pop(Stack* stack);

#endif //RPNCALCULATOR_STACK_H
