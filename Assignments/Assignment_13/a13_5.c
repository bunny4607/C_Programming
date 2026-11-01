
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : diff sum even sum odd 
//  Description     : prints difference of sum of even and odd digits 
//  Input           : int 
//  Output          : int 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
int diffEven_Odd(int iNo ) {

    int iDiff =0 ; 
    int iEvenSum = 0;
    int iOddSum = 0 ;

    
    int iDigit = 0 ; 
    while (iNo != 0 ) {
        iDigit = iNo %10 ; 
        
        if (iDigit %2 == 0){
            iEvenSum = iEvenSum+iDigit ; 
        }
        else {
            iOddSum = iOddSum + iDigit; 
        }
        iNo = iNo /10 ; 
    }
    iDiff = iEvenSum - iOddSum; 
    return iDiff; 
}
int main(){
    int iValue = 0 ;
    int iRet = 0 ; 

    printf("Enter a number : ");
    scanf("%d", &iValue ) ;

    iRet = diffEven_Odd (iValue ) ;
    printf("%d", iRet ); 

    return EXIT_SUCCESS;

}