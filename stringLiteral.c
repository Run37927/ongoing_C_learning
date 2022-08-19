#include <stdio.h>

int input(char str[], int n) {
    int i=0;
    int ch;

    while ((ch=getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] ='\0';
    return i;
}

int main()
{
    // char *ptr = "hello world";
    // puts(ptr);  //automatically create a new line
    // printf("%6.5s", ptr);


    // char a[10];
    // printf("enter something: ");
    // scanf("%s", a);
    // printf("%s", a);

    char str[100];
    int n = input(str, 5);
    printf("%d %s", n, str);

    return 0;
}