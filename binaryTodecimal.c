#include <stdio.h>

int main()
{
    int binary_number;
    int remainder;
    int decimal = 0, weight = 1;

    printf("enter a binary number: ");
    scanf("%d", &binary_number);
    
    while(binary_number != 0) {
        remainder = binary_number % 10;
        decimal = decimal + remainder * weight;
        binary_number /= 10;
        weight *= 2;
    }

    printf("after conversion the decimal number is %d", decimal);

    return 0;
}