#include<stdio.h>

int main(){

/*  printf("please inter the points x1,y1,x2,y2 \n");
    scanf("%d%d%d%d ",&x1,&y1,&x2,&y2);
    int DY=y2-y1 ,DX=x2-x1;
    printf("slope of the line is %.3f",DY/DX);

    */
        int x1=5,x2=3,y1=4,y2=2;
    int DY=y2-y1 ,DX=x2-x1;
    printf("the slope of line that have point1(5,4) and point2(3,2) is %.3f", DY/DX);
  
       return 0;
}