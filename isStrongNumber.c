#include <stdio.h>
// strong number is a number which the sum of factorials of each digit is equal to the original number
// 145 = 1! + 4! + 5! = 145 so 145 is a strong number

int main()
{
    int number, q, remainder, fact = 1, result = 0;

    printf("Enter a number: \n");
    scanf("%d", &number);

    q = number;
    while (q != 0) {
        remainder = q % 10;
        for (int i = 1; i<= remainder; i++) {
            fact *= i;
        }
        result += fact;
        fact = 1;
        q /= 10;
    }

    if (result == number)
        printf("%d is a strong number", number);
    return 0;
}