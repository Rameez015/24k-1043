#include<stdio.h>
/*Write a recursive function that calculates the sum of digits of a number. For example, if
the input is 123, the output should be 6.*/

int digitsum(int n){
   if(n==0) return 0;
   return n%10 + digitsum(n/10);
}
int main (){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int x = digitsum(n);
    printf("%d is the sum of the digits of your number.", x);

}