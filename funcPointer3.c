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

// function shouldNotChange takes in a function pointer
void shouldNotChange(int (*func)(int, int))
{
    //  initiate random generator
    srand(time(NULL));
    int a = rand() % 100;
    int b = rand() % 100;
    printf("The result of the operattion between  %d and %d is % d\n", a, b, func(a, b));
}

int main(int argc, char* argv[])
{

    shouldNotChange(sum);
    shouldNotChange(mul);
    return 0;
}
