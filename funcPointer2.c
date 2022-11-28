#include <stdio.h>
#include <stdlib.h>


// signed long is called long long
long long add(int a, int b) {
    return a + b;
}

long long mul(int a, int b) {
    return a * b;
}

void exec(long long (*func)(int, int)) {
    printf("%lld\n", func(5, 7));
}

int main(int argc, char *argv[])
{
    exec(add);
    exec(mul);
    return 0;
}