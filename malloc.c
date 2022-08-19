#include <stdio.h>
#include <stdlib.h>

int *increment(int n) {
    int *ptr;
    
    ptr = (int *)malloc(sizeof(int));  // allocating 1 byte for integer, pointing in the heap
    *ptr = n+1;  // de-reference that location on the heap and set the content/value to n+1
    return ptr;  // return the address on the heap, so only the stack is erased, things on the heap are not erased unless you use free()
}


int main() {
    int *p;
    p = increment(1); // as soon as increment() is returned, things on the stack are erased immediately, but the value 2 is still in the heap
    printf("%d\n", *p);  // this will print 2
    free(p);  // forgetting to free memory will cause memory leak
    p=0;
}