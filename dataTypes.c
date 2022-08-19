#include <stdio.h>
#include <limits.h>
#include <float.h>


int main() {
    printf("The value of maximum integer is %i\n", INT_MAX);
    printf("The value of minimum integer is %i\n", INT_MIN);
    printf("An integer takes %i bytes\n", sizeof(int));

    printf("The value of maximum float number is %f\n", FLT_MAX);
    printf("The value of minimum float number is %.50f\n", FLT_MIN);
    printf("A float takes %i bytes\n", sizeof(float));

    printf("-----------------------------------------------------\n");
    printf("The value of maximum short number is %i\n", SHRT_MAX);
    printf("The value of maximum long number is %i\n", LONG_MAX);
    printf("The value of maximum double number is %f\n", DBL_MAX);
    printf("The value of maximum CHAR is %i\n", CHAR_MAX);

    return 0;
}