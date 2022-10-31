#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *ptr = (int *)malloc(2*sizeof(int));

    if (ptr == NULL) {
        printf("memory not available!");
        exit(1);
    }

    printf("enter two integers: \n");
    for (i=0; i<2; i++) {
        scanf("%d", ptr + i);
    }

    // realloca with 2 more space fo integers
    ptr = (int *)realloc(ptr, 4 * sizeof(int)); // two arguments, old pointer, new size you want
    if (ptr == NULL) {
        printf("memory not available!");
        exit(1);
    }

    printf("enter 2 more integers: \n");
    for (i=2; i<4; i++) {
        scanf("%d", ptr + i);
    }

    // display numbers they entered
    for (i=0; i<4; i++) {
        printf("%d ", *(ptr + i));
    }
}