//check given number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number=");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("given number is divisible by 5");
    }
    else{
        printf("given number is not divisible by 5");
    }
    return 0;
}
