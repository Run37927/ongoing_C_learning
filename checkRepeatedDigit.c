#include <stdio.h>


int main() 
{
    int seen[10]  = {0};
    int N;
    // N is a user input number, eg 1232
    printf("Enter a number: ");
    // prompt user for a number and store it inside variable N;
    scanf("%d", &N);

    int remainder;
    while (N>0) {
        remainder = N % 10;
        if (seen[remainder] == 1)
            break;
        
        seen[remainder] = 1;
        N = N / 10;
    }

    if (N > 0) 
        printf("Found repeated digits");
    else
        printf("Not found repeated digits");

    return 0;
}