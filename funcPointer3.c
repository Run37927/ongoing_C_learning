#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int sum(int x, int y)
{
    return x + y;
}

int mul(int x, int y)
{
    return x * y;
}

int main(int argc, char* argv[])
{
    //  initiate random generator
    srand(time(NULL));
    int a = rand() % 100;
    int b = rand() % 100;
    printf("the result of the operattion between  %d and %d is % d\n", a, b, sum(a, b));

    return 0;
}
