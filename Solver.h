/*
 * Author: Orion Koepke
 * Date Last Edited: 12/18/16
 */

#ifndef RPNCALCULATOR_SOLVER_H
#define RPNCALCULATOR_SOLVER_H

double preformOperation(double firstNum, double secondNum, char* operator);

int isNumber(char* string);

double getNumber(char* string);

double getOutput(char* input);

#endif //RPNCALCULATOR_SOLVER_H
