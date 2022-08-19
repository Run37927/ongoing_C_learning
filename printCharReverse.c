#include <stdio.h>

int main()
{
    char s[100];
    int count = 0;
    int ch;
    int i;
    // read into array

    ch = getchar();
    while (ch != EOF && count < 100)
    {
        s[count] = ch;
        count++;
        ch = getchar();
    }

    // print in reverse
    i = count - 1;
    while (i >= 0)
    {
        putchar(s[i]);
        i--;
    }
}