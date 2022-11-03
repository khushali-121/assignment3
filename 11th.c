//display the examination passed or failed
#include<stdio.h>
int main()
{
    float eng,hindi,math,evs,comp,per;
    printf("Enter the marks of five subjects eng,hindi,math,evs,comp=");
    scanf("%f%f%f%f%f",&eng,&hindi,&math,&evs,&comp);
    per=(eng+hindi+math+evs+comp)*100/500;
    if(per>=33)
    printf("passed");
    else
    printf("failed");
    return 0;
}