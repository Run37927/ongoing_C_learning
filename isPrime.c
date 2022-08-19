#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    int i, val1, val2, count = 0;
    printf("Enter a postivie integer: ");
    scanf("%d", &x);

    val1 = ceil(sqrt(x));
    val2 = x;

    for (i = 2; i <= val1; i++)
    {
        if (val2 % i == 0)
            count = 1;
    }

    if ((count == 0 && val2 != 1) || val2 == 2 || val2 == 3)
        printf("it's a prime");
        
    return 0;
}