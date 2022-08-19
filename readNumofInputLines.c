#include <stdio.h>

int read_next_line();

int read_all_lines() {
    int linecnt = 0;
    int isvalid;

    while ( !feof(stdin) ) {
        isvalid = read_next_line();
        linecnt = linecnt + isvalid;
    }
    return linecnt;
}

int read_next_line() {
    int ch;
    int flag = 0;
    ch = getchar();

    while ( ch != EOF && ch != '\n') {
        ch = getchar();
        flag = 1;
    }

    return flag || (ch == '\n');
}

int main() {
    read_all_lines();
}