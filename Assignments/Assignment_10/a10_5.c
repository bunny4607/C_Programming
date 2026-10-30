
#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Funciton name   : SquareMeter 
//  Description     : calcualtes sq m  
//  Input           : int 
//  Output          : double 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dArea = 0.0;

    dArea = iValue * 0.092903;

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter : %lf\n", dRet);

    return EXIT_SUCCESS;
}
