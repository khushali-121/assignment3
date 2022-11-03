// C program to calculate profit or loss
#include <stdio.h>
int main()
{
    float cp,sp,pf,ls,pfper,lsper; 
    
    /* Input cost price and selling price of a product */
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);
    
    if(sp > cp)
    {
        /* Calculate Profit percentage */
        pf = sp - cp;
        pfper=pf/cp*100;
        printf("Profi percentage = %f", pfper);
    }
    else if(cp > sp)
    {
        /* Calculate Loss percentage */
        ls = cp - sp;
        lsper=ls/cp*100;
        printf("Loss percentage = %f", lsper);
    }
    else
    {
        /* Neither profit nor loss */
        printf("No Profit No Loss.");
    }

    return 0;
}
