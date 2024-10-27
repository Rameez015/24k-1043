#include<stdio.h>
/*Write a C program to generate a diamond shape pattern using nested loops. The program
should take the number of rows for the upper half of the diamond as input from the user.
                                       *
                                      *  *  
                                    *   *  *
                                      *  *
                                        *
*/                                      
int main () {
    int rows, i, j, gap;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (gap = 1; gap <= rows - i; gap++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = rows - 1; i >= 1; i--) {
        for ( gap= 1; gap <= rows - i; gap++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}