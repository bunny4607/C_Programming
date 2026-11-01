#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : difference of summation of factos and non factos 
//  Description     : prints difference of summation of factos and non factos
//  Input           : int 
//  Output          : int  
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
int displayDiffFact (int iNo ){
    int i = 0 ; 
    int iSumNonFact = 0 ;
    int iSumFact = 0 ; 
    int iDiff = 0 ; 
    for (i = 1 ; i <= iNo ; i++){
        if(iNo % i != 0 ){
            iSumNonFact = iSumNonFact + i ;
        }
        else {
            iSumFact = iSumFact + i ; 
        }
        iDiff = iSumFact - iSumNonFact ; 

        
    }
    return iDiff ; 

}
int main(){
    int iValue = 0 ;
    int iRet = 0 ; 

    printf("Enter a number : "); 
    scanf("%d", &iValue ); 
    
    iRet = displayDiffFact(iValue ); 

    printf("%d", iRet ); 


    return EXIT_SUCCESS; 

}