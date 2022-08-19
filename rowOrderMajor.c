// using pointers instead of nested for loop to print out a 2D array

for (p = &a[0][0]; p<= &a[row-1][col-1]; p++)
    printf("%d ", *p);