#include <stdio.h>


int main()
{
    int n;

    printf("enter the number of elements (length) you want to reverse: \n");
    scanf("%d", n);

    int a[n];
    printf("now enter all %d elements in this array: ", n);
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }


    printf("elements in reverse order are: \n");
    for (int i=n-1; i>=0; i--) {
        printf("%d ", a[i]);
    }


    return 0;
}