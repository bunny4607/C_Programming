
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : multiplication of digits
//  Description     : prints multiplication of all the digits in a number excluing zero 
//  Input           : int 
//  Output          : int 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
int MultDigits(int iNo ) {
    int iMul = 1 ; 
    if(iNo <0 ) iNo = -iNo ;
    
    int iDigit = 0 ; 
    while (iNo != 0 ) {
        iDigit = iNo %10; 

        if (iDigit!=0){
            iMul = iMul * iDigit ; 
        }
        
        iNo = iNo /10 ; 
    }
    return iMul; 
}
int main(){
    int iValue = 0 ;
    int iRet = 0 ; 

    printf("Enter a number : ");
    scanf("%d", &iValue ) ;

    iRet = MultDigits (iValue ) ;
    printf("%d", iRet ); 

    return EXIT_SUCCESS;

}