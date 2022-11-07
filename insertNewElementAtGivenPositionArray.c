#include <stdio.h>

// 10 elements in this array

// I want to insert 78 at index 4
//               78
//                ⬇
// [2, 34, 21, 6, 7, 8, 90, 67, 23, 39]
//  0  1   2   3  4  5  6   7   8   9

// [2, 34, 21, 6, 78, 7, 8, 90, 67, 23, 39]
//  0  1   2   3   4  5  6  7   8   9   10

// i need to create a new array of size 10+1 = 11
// copy paste elements up to but not including index 4
// so 2, 34, 21, 6 goes into the new array
// arr[4] = data
// copy the rest of elements to new array


void insert_at_position(int old[], int new[], int size, int data, int pos)
{
    for (int i=0; i<pos-1; i++) {
        new[i] = old[i];
    }

    new[pos-1] = data;

    for (int i=pos; i<size+1; i++) {
        new[i] = old[i-1];
    }
}

int main()
{
    int original_arr[] = {2, 34, 21, 6, 7, 8, 90, 67, 23, 39};
    int pos = 5; // position 5, index 4
    int data = 78;
    int size = sizeof(original_arr) / sizeof(original_arr[0]); // get the size of the array

    int new_arr[size + 1]; // create the new array

    // passing new_arr to the function
    // is equiv. of passing the address of first element in new array
    // so the changes made inside that function will be reflected here in main
    insert_at_position(original_arr, new_arr, size, data, pos);

    for (int i = 0; i < size + 1; i++)
    {
        printf("%d ", new_arr[i]);
    }

    return 0;
}


// O(n) where n is size of original array
