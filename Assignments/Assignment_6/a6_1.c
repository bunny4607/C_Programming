#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Billing 
//  Description     : Calculates total bill based on number of units consumed 
//  input           : int 
//  output          : int
//  Author          : Vedant Kalidas Barne
//  Date            : 21/10/2026
//////////////////////////////////////////////////////////////////////////////

int Bill(int iNo)
{

    int ibill =0;
    if (iNo <= 100 ){
        ibill = 5*iNo;
        return ibill;
    }
    else if (iNo > 100 && iNo <=200){
        ibill = 7*iNo;
        return ibill;

    }
    else if (iNo > 200 ){
        ibill = 10*iNo;
        return ibill;
    }
}
int main(){
    int iUnits = 0;
    int iPrice = 0;

    printf("Enter number of units consumed : ");
    scanf("%d", &iUnits);

    iPrice = Bill(iUnits);
    printf("bill is %d " , iPrice);

    return EXIT_SUCCESS;
}

    

