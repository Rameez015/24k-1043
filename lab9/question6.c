/*Create a C program that swaps the values of two integers using a user-defined function,
swapIntegers. The user inputs two integer values, and the program uses the function to swap
them. It should perform the swap and display the updated values.*/
#include<stdio.h>
int swapIntegers(int a, int b);
int main (){
    int a, b;
    printf("enter first number: ");
    scanf("%d\n",&a);
    printf("enter second number: ");
    scanf("%d\n",&b);
    printf("your second number is now %d and your first number is now %d",swapIntegers(a,b));
}
int swapIntegers(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    return a, b;
}