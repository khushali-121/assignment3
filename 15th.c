//check given number is positive, negative and zero
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number=");
    scanf("%d",&num);
    if (num>0)
        printf("given number is positive");
    else if(num==0)
        printf("given number is zero");
    else
        printf("given number is negative");
    return 0;
}