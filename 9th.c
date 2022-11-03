//WAP to check greater number among three number 
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter three numbers=");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3)
        printf("greatest number is %d",n1);
        else
         printf("greatest number is %d",n3);
    }
    else if(n2>n3)
    printf("greatest number is %d",n2);
    else 
    printf("greatest number is %d",n3);
    return 0;
}