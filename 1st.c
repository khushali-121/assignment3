//check given number is positive or non positive
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number=");
    scanf("%d",&num);
    if (num>=0)
    {
        printf("given number is positive");
    }
    else{
        printf("given number is nonpositive");
    }
    return 0;
}