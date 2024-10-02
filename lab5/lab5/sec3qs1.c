#include<stdio.h>
//Write a program using a ternary operator to find the maximum of two numbers.

int main()
{
    int num1,num2;
    printf("enter the two number to check the maximum of them \n");
    scanf("%d%d",&num1,&num2);
    num1>num2? printf("num1 is greater %d \n",num1) : printf("num2 is greater %d \n",num2);
    
    return 0;
}