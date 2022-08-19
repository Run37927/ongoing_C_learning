#include <stdio.h>

int main()
{
    char a = 7;
    a ^= 5;
    printf("%d",printf("%d", a+= 3));
    return 0;
}


// answer is 51
// first execute inner printf, print out 5, then inner printf also returns #of characters it prints which in this case 1, so concat both is 51