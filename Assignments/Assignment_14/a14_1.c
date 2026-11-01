#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : multiplication of factos
//  Description     : prints multiplication of all the factors in a number  
//  Input           : int 
//  Output          : int 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
int FactMult(int iNo ){
    int i = 0 ;
    int iFact = 1; 

    for(i =1 ; i< iNo ; i++) {
        if (iNo % i == 0){
            iFact = iFact *i ; 

        }
    }
    return iFact ; 
}
int main(){
    int iValue = 0 ; 
    int iRet = 0 ; 
    printf("Enter a number : "); 
    scanf("%d", &iValue ); 
    
    iRet = FactMult(iValue ); 

    printf("%d", iRet ) ; 
    return EXIT_SUCCESS; 

}