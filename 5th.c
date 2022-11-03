//check given number is three digit or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a three digit number=");
    scanf("%d",&n);
    if(n>99&&n<1000)
    printf("number is three digit number");
    else
    printf("number is not three digit number");
    return 0;
}