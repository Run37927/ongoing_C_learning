#include <stdio.h>

int iscoprime(int a, int b)
{
    // return 1 if gcd of a and b is 1, otherwise return 0
    // assume a and b is greater than 0

    int temp;

    // swap a and b if a is less than b
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    // finding GCD of a and b => a is the GCD
    while (!(b == 0))
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    if (a == 1)
        return 1;
    else
        return 0;
}


//eg.,   12, 3, 4, 5, 7, 8, 9 =>  5 pairs of consecutive relatively primes (3 4, 4 5, 5 7, 7 8, 8 9)
int main()
{
    int prev, curr;
    int i, n;  // n is the length of the number list in this case 7
    int count = 0;
    scanf("%d", &n);
    scanf("%d", &prev);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &curr);
        count = count + iscoprime(prev, curr);
        prev = curr;
    }
}