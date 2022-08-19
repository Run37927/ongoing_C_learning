#include <stdio.h>

int main() {
    char bellch, vtabch, ch;

    bellch = '\x7';
    vtabch = '\xb';
    ch = '\x41';
    printf("%c%c%c", bellch, vtabch, ch);
}