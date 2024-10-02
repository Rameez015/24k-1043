#include <stdio.h>

//Write a program that categorizes a person's age into different life stages: Child, Teenager, Adult,and Senior, using nested if-else statements.
int main() {
int age;
printf("enter your age \n");
scanf("%d",&age);
if(age>=1)
{
if(age>=13 && age<=19){
printf("Teenager \n");
}
else if(age>=20 && age<=40){
printf("Adult \n");
}
else if(age>40){

printf("Senior \n");
}

else{

printf("Child \n");

}

}

return 0;


}