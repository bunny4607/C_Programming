#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1 
#define FALSE 0

//////////////////////////////////////////////////////////
//
//  Funciton name   : division by 5 
//  Description     : checking if a number is divisble by 5 
//  Input           : int
//  Output          : bool 
//  Author          : Vedant Kalidas Barne
//  Date            : 20/10/2026
//
//////////////////////////////////////////////////////////

BOOL Check (int iNo)
{
    if ((iNo %5 ) == 0)
    return TRUE;
    else {
        return FALSE;
    }
}
int main()
{
    int iValue =0 ;
    BOOL bRet = FALSE;

    printf("enter a number : ");
    scanf("%d", &iValue );

    bRet = Check(iValue );

    if(bRet == TRUE){
        printf("Divisible by 5 ");

    }
    else {
        printf("Not divisible by 5");
    }
    return EXIT_SUCCESS;

}