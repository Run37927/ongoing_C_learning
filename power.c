#include <stdio.h>


int main()
{
    int base, exp;
    int q;
    double power= 1.0;

    printf("enter base and exp: ");
    scanf("%d %d", &base, &exp);

    q = base;
    if (exp > 0){
        for (int n=1; n<exp; n++) {
            base = base * q;
        }
        printf("%d to the power of %d is %d", q, exp, base);
    } else {
        while(exp !=0) {
            power = power * (1.0/base);
            exp ++;
        }
        printf("%d to the power of %d is %.10f", base, exp, power);
    }

 
    return 0;
}