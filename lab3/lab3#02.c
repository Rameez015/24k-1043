#include<stdio.h>
int main (){

int a = 20;
int b = 25;
int new_b;

printf("a is %d\n",a);
printf("b is %d\n",b);
 
 new_b=b;
 b=a;
 a=new_b;
 printf("a is %d \n",a);
 printf("b is %d \n",b);

 return 0;




}