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
    // returns long long, function pointer identifier (*func)
    // takes two arguments int, int
    long long (*func)(int, int);

    func = &mul;
    
    printf("%lld\n", func(5, 7));

    return 0;
}