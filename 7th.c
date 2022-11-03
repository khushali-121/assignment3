//check the roots nature of given quadratic eraution
#include<stdio.h>
int main()
{
    float dis,b,a,c;
    printf("ax^2+bx+c is quadratic equation where a,b,c are cofficients");
    printf("\nEnter th ecoefficients of a quadratic eqration =");
    scanf("%f%f%f",&a,&b,&c);
    dis=b*b-4*a*c;
    if(dis>0)
    printf("roots are real");
    else if(dis==0)
    printf("roots are equal");
    else
    printf("roots are imaginary");
    return 0;
}