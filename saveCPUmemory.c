#include <stdio.h>
#pragma pack(1)

// pragma is a special purpose directive used to turn on or off certain features


struct abc {
    char a;
    int b;
    char c;
} var;

int main() 
{
    printf("%d", sizeof(var));  // 6 instead of 12, but more CPU cycles required here
    return 0;
}


// you can either save CPU memory or CPU cycles, in this case we added pragma to save CPU memory