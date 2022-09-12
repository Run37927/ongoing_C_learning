#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) 
{
    int n, m;
    n = atoi(argv[1]);
    m = atoi(argv[2]);
    printf("argc: &d\n", argc);
    printf("argument 1: %d\nargument 2: %d\n", n, m);

    return 0;
}