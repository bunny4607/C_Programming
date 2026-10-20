#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



//////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : shopping disscount 
//  Description     : calculates disscount 
//  input           : float  
//  output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 21/10/2026
//////////////////////////////////////////////////////////////////////////////

bool Disscount(float fAmt)
{
    float fDisscount = 0.0f;
    float fFinalAmount  = 0.0f;

    if(fAmt <=1000){
        fFinalAmount = fAmt;
        printf("total bill is : %f\n",fFinalAmount );

    }
    else if (fAmt >1000 && fAmt <= 5000){
        fDisscount = 0.1*fAmt;
        fFinalAmount = fAmt - fDisscount;
        printf("total bill is : %f", fFinalAmount);
    }
    else if(fAmt > 5000){
        fDisscount = 0.2 * fAmt;
        fFinalAmount= fAmt = fDisscount;
        printf("total bill is : %f", fFinalAmount);
    }



}
int main(){
    float fAmount = 0.0f;

    printf("Enter the amount : \n");
    scanf("%f", &fAmount);

    Disscount (fAmount );
    return EXIT_SUCCESS;

}

    

