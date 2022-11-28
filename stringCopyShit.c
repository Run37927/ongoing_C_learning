#include <stdio.h>
#include <string.h>


int main()
{
    char *source;
    char *destination;

    source ="john";

    strcpy(destination, source);
    printf("%s\n", destination);

    return 0;
}