//check given number is even or odd without using modulus operator
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number=");
    scanf("%d",&num);
    if(num & 1==1)  //with using bitwise operator
    {
        printf("given number is odd");
    }
    else{
        printf("given number is even");
    }
    return 0;
}
