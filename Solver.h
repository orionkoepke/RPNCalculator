/*
 * Author: Orion Koepke
 * Date Last Edited: 12/22/16
 */

#ifndef RPNCALCULATOR_SOLVER_H
#define RPNCALCULATOR_SOLVER_H

/* double getOutput(const char* input, double* output)
 * const char* input - a proper reverse polish notation expression
 * double* output - the value of the proper reverse polish notation expression in input
 * This function puts the value of the reverse polish notation expression in input into output
 * and returns 1 if input is a proper reverse polish notation expression, and puts 0 in output
 * and returns 0 otherwise.
 */
double getOutput(const char* input, double* output);

#endif //RPNCALCULATOR_SOLVER_H
