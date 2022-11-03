//WAP to check greater number between two number
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers=");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    printf("greatest number is %d",n1);
    else if(n1==n2)
    printf("both numbers are equal %d=%d",n1,n2);
    else
    printf("greatest number is %d",n2);
    return 0;
}