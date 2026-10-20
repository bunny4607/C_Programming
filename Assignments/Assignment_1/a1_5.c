#include<stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Funciton name   :printing stars 
//  Description     :  printing stars n number of times where n is taken from user 
//  Input           : iint 
//  Output          : void  
//  Author          : Vedant Kalidas Barne
//  Date            : 20/10/2026
//
//////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0 ;
    for (iCnt =1; iCnt<=iNo; iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue  =0 ;
    printf("enter a number : ");
    scanf("%d", &iValue);

    Accept(iValue );

    return EXIT_SUCCESS;
}