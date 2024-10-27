#include<stdio.h>
//Write a C program to find the saddle point(s) in a given 3x3 matrix. A saddle point is an element
// that is the smallest in its row and the largest in its column.
int main() {
    int matrix[3][3], i, j;
    int SaddleCount = 1;

    printf("Enter the elements of your matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            SaddleCount = 1;
            int a;
            // break statements may also be used here.
            for (a = 0; a < 3; a++) {
                if (matrix[i][a] < matrix[i][j]) {
                    SaddleCount = 0;
                }
            }
            // and here.
            if (SaddleCount) {
                for (a = 0; a < 3; a++) {
                    if (matrix[a][j] > matrix[i][j]) {
                        SaddleCount = 0;
                    }
                }
            }
            if (SaddleCount) {
                printf("Saddle point is at {%d, %d}: %d\n", i, j, matrix[i][j]);
            }
        }
    }

    return 0;
}