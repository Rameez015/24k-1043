#include<stdio.h>
//Create a 3D array representing 2 pages of a 3x3 matrix. Initialize it and find the sum of all the
//elements on each page.
 int main() {
    int layers = 2;
    int rows = 3;
    int cols = 3;

    int array[layers][rows][cols] = {{{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};

    for (int l = 0; l < layers; l++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sum = sum + array[l][i][j];
            }
        }
        printf("Sum of elements on page %d: %d\n", l + 1, sum);
    }
    return 0;
} 