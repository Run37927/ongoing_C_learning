#include <stdio.h>


int main()
{
    int number;
    int count_of_digits = 0;
    int result = 0;
    int mul =1;
    int cnt, remainder;

    printf("Enter a number to see if it is armstrong: \n");
    scanf("%d", &number);

    int q = number;
    while (q !=0) {
        q = q /10;
        count_of_digits ++;
    } // 371/10 = 37, 37/10 = 3, 3/10 = 0, divided 3 times, so count of digits is 3 now
    cnt = count_of_digits;
    q = number;

    while( q!=0) {
        remainder = q % 10;
        while (cnt !=0) {
            mul = mul * remainder;
            cnt --;
        }
        result = result + mul;
        cnt = count_of_digits;
        q = q /10;
        mul = 1;
    }


    if (result == number) 
        printf("%d is armstrong number", number);
    else
        printf("%d is NOT armstrong number", number);
    
    return 0;

}