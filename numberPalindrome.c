#include <stdio.h>

int main()
{
    int result = 0;
    int n;
    int remainder;
    int q;

    printf("Enter a number: \n");
    scanf("%d", &n);

    q = n;

    while (q != 0) {
        remainder = q % 10;
        result = result *10 + remainder;
        q = q/10;
    }

    if (result == n)
        printf("It's palindrome");
    else
        printf("It's not palindrome");
    
    return 0;
  
}