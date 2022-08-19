#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter two numbers: \n");
    scanf("%d %d", &x, &y);

    while (y != 0)
    {
        if (y < 0)
        {
            x--;
            y++;
        }
        else
        {
            x++;
            y--;
        }
    }

    printf("sum is %d", x);
    return 0;
}