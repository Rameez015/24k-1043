#include<stdio.h>
//Write a C program to multiply two matrices of size 3x3 and display the result matrix.
int main () {
int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int result[3][3], i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = 0;
            int k;
            for (k = 0; k < 3; k++) {
                result[i][j] =  result[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("result of multiplication of the two matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}