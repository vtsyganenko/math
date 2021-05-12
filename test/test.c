#include <stdio.h>
#include <math.h>

#include "math_methods.h"

int isEqual(double a, double b)
{
    if(fabs(a-b) < 0.00001) {
        return 0;
    }
    else {
        return -1;
    }
}

int main()
{
    double a = 23.4;
    double b = 85.1;
	
    if(isEqual(math_add(a, b), a+b) == 0) {
        printf("math_add ok\n");
    }
    else {
        printf("math_add fail\n");
    }
	
    if(isEqual(math_sub(a, b), a-b) == 0) {
        printf("math_sub ok\n");
    }
    else {
        printf("math_sub fail\n");
    }

    return 0;
}

