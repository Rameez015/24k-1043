#include<stdio.h>
//Create a program that checks if a person is eligible to vote based on their age and citizenship
//status.
int main(){
    int citizenship,age;
    printf("are you american?; press 1 for yes and press 0 for no");
    scanf("%d",&citizenship);
    if (citizenship){
        printf("enter your age");
        scanf("%d",&age);
        if(age>=18){
            printf("you are eligible to vote");

        }
    }
    else{
        printf("you are not eligile to vote");
        
    }
    return 0;
}