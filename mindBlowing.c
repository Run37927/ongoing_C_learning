#include <stdio.h>


int main() 
{
    int a[] = {5,4,7,8,9};
    int *p = &a[0];
    printf("%d ", *(p++));
    printf("%d\n", *p);

    return 0;
}