/*
 * Author: Orion Koepke
 * Date Last Edited: 12/18/16
 */

#include <stdio.h>
#include "Solver.h"

int main(int argc, const char* argv[])
{
    if(argc < 2)
    {
        printf("Not enough argumnets entered.\n");
        return 0;
    }
    else if(argc > 2)
    {
        printf("Too many arguments entered.\n");
        return 0;
    }
    else {
        printf("%s = %lf\n", argv[1], getOutput(argv[1]));
        return 1;
    }
}
