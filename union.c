#include <stdio.h>

union abc {
    int a;
    char b;
    double c;
    float d;
};

int main()
{
    printf("%ld", sizeof(union abc));
    // the size of a union is taken according to the largest member of the union, in this case double
    return 0;
}

