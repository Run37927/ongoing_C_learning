#include <stdio.h>

void read_matrix(double mat[3][3]) {
    int i,j;

    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            scanf("%f", &mat[i][j]);
        }
    }
}


