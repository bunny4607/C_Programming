#include<stdio.h>
#include<stdlib.h> 
//////////////////////////////////////////////////////////
//
//  Funciton name   : currency conversion  
//  Description     : comverts dollar to inr  
//  Input           : int 
//  Output          : int 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
int dollarToInr (int iNo ) {
    int inr = 1 ; 

    inr = 70*iNo; 

    if(iNo < 0 ) iNo = - iNo ; 

    return inr; 


    
}
int main()
{

    int iValue = 0 ; 
    int iRet = 0 ;

    printf("Enter in dollar : ");
    scanf("%d", &iValue); 

    iRet = dollarToInr(iValue ); 
    
    printf("in inr : %d", iRet ); 



    return EXIT_SUCCESS;

}