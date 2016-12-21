/*
 * Author: Orion Koepke
 * Date Last Edited: 12/18/16
 */

#ifndef RPNCALCULATOR_SOLVER_H
#define RPNCALCULATOR_SOLVER_H

/* double getOutput(char* input)
 * char* input - a formula in reverse polish notation.
 * This function takes in input and returns the value of input solved.
 */
double getOutput(const char* input, double* output);

#endif //RPNCALCULATOR_SOLVER_H
