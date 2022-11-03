//check given alphabet is Uppercase, lowercase or special chracter
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet=");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z')
        printf("lowercase");
    else if(ch>='A'&& ch<='Z')
        printf("Uppercase");
    else
         printf("special character");
    return 0;
}