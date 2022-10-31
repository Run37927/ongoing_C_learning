#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter how many intergers you want to display: ");
    scanf("%d", &n);
    // allocate enough memory for these many integers using malloc
    // typecast it to become an integer pointer
    // assign it to a pointer ptr
    int *ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter an integer: ");
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}