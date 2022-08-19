#include <stdio.h>

int main()
{
    int number;
    printf("enter the number: ");
    scanf("%d", &number);

    int rem, sum = 0;

    for (int i = 1; i < number; i++)
    {
        rem = number % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == number)
        printf("%d is a perfect number", number);
    else
        printf("%d is not a perfect number", number);

    return 0;
}