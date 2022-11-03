//check given number is divisible by 3 or 7
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number=");
    scanf("%d",&num);
    if(num%7==0)
        printf("given number is divisible by 7");
    else if(num%3==0)
     printf("given number is divisible by 3");
    else
    printf("given number is not divisible by 3 or 7");
    return 0;
}
