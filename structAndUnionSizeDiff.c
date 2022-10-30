#include <stdio.h>
#pragma pack(1) // means no padding, no holes between memory cells


struct {
    double a;
    union {
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} s;


union {
    double a;
    struct {
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} u;

int main()
{
    printf("%ld %ld\n", sizeof(s), sizeof(u));

    return 0;
}

