#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : single digit
//  Description     : prints single digit number names  
//  Input           : int 
//  Output          : int 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
int displayDigit(int iNo ){
    if (iNo == 1 ) return 1; 
    else if (iNo == 2 ) return 2; 
    else if (iNo == 3 ) return 3; 
    else if (iNo == 4 ) return 4; 
    else if (iNo == 5 ) return 5; 
    else if (iNo == 6 ) return 6; 
    else if (iNo == 7 ) return 7; 
    else if (iNo == 8 ) return 8; 
    else if (iNo == 9 ) return 9; 
    else return 0 ; 

}
int main(){

    int iValue = 0 ;
    int iRet = 0 ;  

    printf("Enter a single digit number : ") ;
    scanf("%d\n", &iValue ); 

    iRet =  displayDigit (iValue ) ;    

    if (iRet == 1 ) printf("One ");
    else if (iRet == 2 ) printf("two ");
    else if (iRet == 3 ) printf("three ");  
    else if (iRet == 4 ) printf("four ");
    else if (iRet == 5 ) printf("five ");
    else if (iRet == 6 ) printf("six ");
    else if (iRet == 7 ) printf("seven ");
    else if (iRet == 8 ) printf("eight ");
    else if (iRet == 9 ) printf("nine ");
    else if (iRet == 0 ) printf("invalid input  ");


    return EXIT_SUCCESS; 

}