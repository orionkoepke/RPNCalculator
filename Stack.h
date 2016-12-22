/*
 * Author: Orion Koepke
 * Date Last Edited: 12/22/16
 */

#ifndef RPNCALCULATOR_STACK_H
#define RPNCALCULATOR_STACK_H

/* Node:
 * double num - the number that this node stores
 * struct node* next - the next number in the stack or null if there is not another node
 */
typedef struct node
{
    double num;
    struct node* next;
} Node;

/* Stack
 * Node* head - the node on the top of the stack
 * int length - the number of nodes on the stack
 */
typedef struct
{
    Node* head;
    int length;
} Stack;

/* void push(Stack* stack, double num)
 * Stack* stack - the current stack
 * double num - the number to be pushed on to the stack
 * This function creates a new node to store num and makes that node the new head
 * of stack and makes the old head of stack the next node of the new node.
 */
void push(Stack* stack, double num);

/* double peek(Stack stack)
 * stack - the current stack
 * This function returns the number in the head node of the stack.
 */
double peek(Stack stack);

/* void pop(Stack* stack, double num)
 * Stack* stack - the current stack
 * This function makes the head of the stack be the next node of the current head and then
 * frees the current head.
 */
void pop(Stack* stack);

/* void popAll(Stack* stack, double num)
 * Stack* stack - the current stack
 * This function frees the whole stack.
 */
void popAll(Stack* stack);

#endif //RPNCALCULATOR_STACK_H
