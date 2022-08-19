#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int result, number;

    printf("enter number of terms: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        printf("%d ", a);
        result = a + b;
        a = b;
        b = result;
    }
    return 0;
}