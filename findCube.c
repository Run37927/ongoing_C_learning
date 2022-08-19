#include <stdio.h>
#include <stdlib.h>


double cube(double num) {
    double result = num * num * num;
    return result;
}


int main() {
    printf("Answer is %f", cube(3.0));

    return 0;
}