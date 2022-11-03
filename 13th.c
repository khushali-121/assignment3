//check given number is divisible by 3 or 2
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number=");
    scanf("%d",&num);
    if(num%2==0)
        printf("given number is divisible by 2");
    else if(num%3==0)
     printf("given number is divisible by 3");
    else
    printf("given number is not divisible by 3 or 2");
    return 0;
}
