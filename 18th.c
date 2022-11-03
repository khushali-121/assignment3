//take the month number as input and display the number of days in month
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number of month=");
    scanf("%d",&num);
    if(num==1||num==3||num==5||num==7||num==8||num==10||num==12)
    printf("number of days is 31");
    else if(num==2)
    printf("number of days is 28 or 29");
    else 
     printf("number of days is 30");
    return 0;
}