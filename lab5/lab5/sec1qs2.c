#include <stdio.h>

//Create a program that determines if a number is positive, negative, or zero, and if it’s positive,
//checks if it’s an even or odd number.
int main()

{
int number;
printf("enter the number");
scanf("%d",&number);
if(number>=0){
if(number>0){
number%2==0 ? printf("the number is even") : printf(" the number is odd");
}
else{
printf("the number is equal to 0");
}
}
else
{
printf("number is negative");

}
return 0;

}