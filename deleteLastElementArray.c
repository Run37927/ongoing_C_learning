#include <stdio.h>

// [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]
// i want to delete 10
// size of array = 10

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    size = size - 1; // ALL YOU NEED TO DO

    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
