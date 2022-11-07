#include <stdio.h>

// O(n) because for size n array, i need to shift elements n times

int addAtBegin(int arr[], int n, int data)
{
    for (int i=n-1; i>=0; i--) {
        arr[i+1] = arr[i]; // shifting each element to the right by one spot
    }
    arr[0] = data; // put data i want to insert at front
    return n+1; // return the new length of array
}


int main()
{
    int arr[10];
    int data = 10; // the data i want to insert
    int i;
    int n;

    printf("enter the number of elements: ");
    scanf("%d", &n); // scan the data user entered

    printf("now enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // scan them into the array one by one
    }

    n = addAtBegin(arr, n, data);

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // print the results
    }

    return 0;
}