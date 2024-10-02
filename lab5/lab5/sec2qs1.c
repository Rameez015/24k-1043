#include <stdio.h>
int main() {
int num1 ;
printf("enter a number");
scanf("%d",&num1);

if (num1%3==0 && num1%5==0)
{
    printf("the number is divisible by both 3 and 5");

}else{
    printf("the number is not divisible by both 3 and 5");
    
}



return 0;
}