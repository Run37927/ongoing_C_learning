#include <stdio.h>
#include <stdlib.h>


// signed long is called long long
long long add(int a, int b) {
    return a + b;
}

long long mul(int a, int b) {
    return a * b;
}

int main(int argc, char *argv[])
{
    printf("%lld\n", add(5, 7));

    return 0;
}