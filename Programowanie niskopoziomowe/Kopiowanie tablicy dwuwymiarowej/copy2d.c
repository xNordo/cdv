#include <stdio.h>

int main()
{
    int n = 3;
    int a[3][4] = {{11, 12, 13, 14}, {21, 22, 23, 24}, {31, 32, 33, 34}};

    int** b = NULL;
    int i,j;

    b = (int**) malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        b[i] = (int *)malloc(n * sizeof(int));

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            b[i][j] = a[i][j];
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("b[%d][%d] = %d, a = %d\n", i, j, b[i][j], a[i][j]);
        }
    }
}

