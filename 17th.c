//take length of sides and display triangle is valid or not
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the lenght of sides of triangle=");
    scanf("%f%f%f",&a,&b,&c);
    if(a<b+c && b<a+c && c<a+b)
    printf("triangle is valid");
    else
    printf("triangle is not valid");
    return 0;
}