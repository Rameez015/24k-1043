#include<stdio.h>
//Use the ternary operator to check if a number is positive, negative, or zero.
int main(){

int num;
printf("enter a number");
scanf("%d",num);
if (num>=0)
{ num=0? printf("the number is zero") : printf("the number is positive");

}else{
    printf("the number is negative");

}


return 0;


    
}