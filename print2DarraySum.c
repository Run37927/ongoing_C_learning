#include <stdio.h>
// prints the row sum and column sum

int main()
{
    int arr[5][5] = {{8, 3, 9, 0, 10}, {3, 5, 17, 1, 1}, {2, 8, 6, 23, 1}, {15, 7, 3, 2, 9}, {6, 14, 2, 6, 0}};
    int i, j;
    int rowsum = 0;
    int colsum = 0;


    puts("Row sum is:");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            rowsum += arr[i][j];
        }
        printf("%d ", rowsum);
        rowsum = 0;
    }

    puts("\n\nCol sum is:");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            colsum += arr[j][i];
        }

        printf("%d ", colsum);
        colsum = 0;
    }
    return 0;
}