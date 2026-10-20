#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Funciton name   : print 
//  Description     : printing numbers 2x 
//  Input           : int
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 20/10/2026
//
//////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if (iNo < 0 ){
        return;
    }
    int iCnt = 0; 
    for (int iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", 2*iCnt);
    }
}

int main()
{
    int iValue =0 ;
    printf("Enter a number  :");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;

}