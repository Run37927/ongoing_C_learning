#include <stdio.h>
#include <stdlib.h>

// allocate length+1 characters on the heap using malloc
// copy the contents of string to the space on the heap
// finally return the address of that location


char *duplicate(char *s)
{
    int i = 0;
    int len; // length of characters excluding null character
    char *t;  // new string

    // find the length of stirng s
    for (i=0; s[i] != '\0'; i++) {len = i;}

    // allocate memory on the heap using malloc
    t = (char *)malloc( (len + 1) * sizeof(char));

    // copy the contents of s into t
    for (i=0; i< len; i++) {
         t[i] = s[i];
    }

    t[i] = '\0';

    return t;
}

int main() 
{
    char s[] = "Sample";
    char *t;

    t = duplicate(s);
    printf("%s\n", t);
    return 0;
}