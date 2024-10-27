#include<stdio.h>
//Generate a pattern of odd numbers in decreasing order starting from a user-specified number
// using nested loops. For example:
// 9
// 9 7
// 9 7 5
// 9 7 5 3
// 9 7 5 3 1
int main() {
    int n, i, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = n; j >= n - i + 1; j--) {
           int OddNum = 2 * j - 1;
            printf("%d ",OddNum); // to calculate odd numbers
        }
        printf("\n");
    }

    return 0;
}