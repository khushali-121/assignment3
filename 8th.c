//check the given year is leap year or nonleap year
#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year=");
    scanf("%d",&year);
    if(year%400==0)
    printf("leap year");
    else
    printf("nonleap year");
    return 0;
}