#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : sum of  non factos
//  Description     : prints sum of non factors of a number 
//  Input           : int 
//  Output          : int  
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
int displaySumNonFact (int iNo ){
    int i = 0 ; 
    int iSum = 0 ;
    for (i = 1 ; i <= iNo ; i++){
        if(iNo % i != 0 ){
            iSum = iSum + i ;
        }
        
    }
    return iSum ; 

}
int main(){
    int iValue = 0 ;
    int iRet = 0 ; 

    printf("Enter a number : "); 
    scanf("%d", &iValue ); 
    
    iRet = displaySumNonFact(iValue ); 

    printf("%d", iRet ); 


    return EXIT_SUCCESS; 

}