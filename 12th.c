//check given alphabet is Uppercase, lowercase 
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet=");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("lowercase");
    else 
        printf("Uppercase");
       return 0;
}