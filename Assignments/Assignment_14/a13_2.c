
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : count odd digits
//  Description     : prints idd number of digits in a number 
//  Input           : int 
//  Output          : int 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
int countOdd(int iNo ) {
    int iCount = 0 ; 
    if(iNo <0 ) iNo = -iNo ;
    
    int iDigit = 0 ; 
    while (iNo != 0 ) {
        iDigit = iNo %10; 

        if(iDigit%2 != 0 ){
            iCount ++; 

        }
        
        iNo = iNo /10 ; 
    }
    return iCount; 
}
int main(){
    int iValue = 0 ;
    int iRet = 0 ; 

    printf("Enter a number : ");
    scanf("%d", &iValue ) ;

    iRet = countOdd (iValue ) ;
    printf("%d", iRet ); 

    return EXIT_SUCCESS;

}