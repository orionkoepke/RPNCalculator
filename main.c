/*
 * Author: Orion Koepke
 * Date Last Edited: 12/18/16
 */

#include <stdio.h>
#include "Solver.h"

int main(int agrc, const char* argv)
{
    const char str[6] = "3 3 *";

    printf("%lf\n", getOutput(&str));
    printf("Done\n");
    return 1;
}
