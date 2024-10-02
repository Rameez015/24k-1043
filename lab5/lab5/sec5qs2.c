#include<stdio.h>
//Create a program that calculates the sum of digits of a number until the result is a single digit
//(e.g., 123 -> 6).

int main(){


    int num1,sum1 = 0 ;
    printf("enter the number to find the sum until single digit\n") ; 
    scanf("%d",&num1) ;
    while (num1>=10)
    {
        sum1 = sum1+num1%10;
        num1 = num1/10;
    }
    sum1 = sum1+num1 ;
    printf("sum is :%d\n",sum1);

    


return 0;
}