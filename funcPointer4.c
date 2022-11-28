#include <stdio.h>
#include <stdlib.h>

void func(int x)
{
    printf("x: %d\n", x);
}

int main()
{
    void (*funcPointer) (int); // declare function pointer

    funcPointer = &func;

    (*funcPointer) (4); // dereference the function pointer

    return 0;
}