#include <stdio.h>
#define MAX 50

int main()
{
    // declare a bunch of stuff here
    int a[MAX][MAX], b[MAX][MAX];
    int arows, acols, brows, bcols;
    int product[MAX][MAX];
    int sum=0;

    // prompt user to enter the size of first matrix
    printf("Enter the rows and columns of matrix a: ");
    scanf("%d %d", &arows, &acols);

    // prompt user to enter the elements of first matrix
    printf("Enter the elements of matrix a: \n");
    for (int i=0; i<arows; i++) {
        for (int j=0; j<acols; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    // prompt user to enter the size of second matrix
    printf("Enter the rows and columns of matrix b: ");
    scanf("%d %d", &brows, &bcols);
    // check if a row and b column are equal before proceed
    if (brows != acols) {
        printf("Invalid entry!");
    } else {
        // prompt user to enter the elements of second matrix
        printf("Enter the elements of matrix b: \n");
        for (int i=0; i<brows; i++) {
        for (int j=0; j<bcols; j++) {
        scanf("%d", &b[i][j]);
        }
    }
    }
   

    // calculate the result of multiplication of two matrices
    for (int i=0; i<arows; i++){
        for (int j=0; j<bcols; j++){
           for (int k=0; k<brows; k++) {
            sum += a[i][k] * b[k][j];
           }
           product[i][j] = sum;
           sum = 0;
        }
    }

    // print out the 2D array
    printf("Resultant matrix\n");
    for (int i=0; i<arows; i++){
        for (int j=0; j<bcols; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }


    
    return 0;
}