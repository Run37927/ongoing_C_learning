#include <stdio.h>

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    int length = sizeof(a) / sizeof(a[0]);

    printf("length of this array is %d", length);

    return 0;
}