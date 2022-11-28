#include <stdio.h>
#include <stdlib.h>

void func(int x)
{
    printf("x: %d\n", x);
}

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int divide(int x, int y) 
{
    return x / y;
}


int main()
{
    // void (*funcPointer) (int); // declare function pointer
    // funcPointer = &func;
    // (*funcPointer) (4); // dereference the function pointer


    // double (*addPointer)(double, double) = add; // assign right here
    // double a = 20;
    // double b = 40;

    // double result = addPointer(a, b);
    // printf("%.2f\n", result);

    int (*array[])(int, int) = {add, subtract, mul, divide};
    // array of function pointers
    int product = (*array[2])(2, 4);
    printf("product is %d\n", product);

    int subtractionResult = (*array[1])(1, 9);
    printf("subtraction result is %d\n", subtractionResult);


    return 0;
}