#include<stdio.h>

int main(){

     float salary,taxrate, timePinMonths, tax, salaryAftertax;
    
    printf("enter your salary");
    scanf("%f",&salary);

    printf("enter tax rate");
    scanf("%f", &taxrate);

    printf("enter time period in months");
    scanf("%f", &timePinMonths);

    tax= salary * taxrate * timePinMonths /100;
    salaryAftertax= timePinMonths*salary - tax;

    printf("your tax is %f \n",tax);
    printf("your salary after tax is %f \n",salaryAftertax);
    
       return 0;
}