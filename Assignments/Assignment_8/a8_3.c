#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : fact  
//  Description     : prints fact 
//  Input           : int 
//  Output          : int 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
int factorial(int iNo ) {
    if (iNo  < 0) iNo = -iNo ; 
    
    int i = 0 ; 
    int fact = 1  ; 
    for (i =1 ; i <=iNo ;i++ ){
        fact = fact * i ; 
    }
    return fact ;

}

int main(){
    int iValue = 0 ; 
    int iRet = 0 ; 

    

    printf("Enter a number : ");
    scanf("%d", &iValue); 

    iRet = factorial(iValue ) ; 
    printf("factorial of number is : %d", iRet ); 
    
    


    return EXIT_SUCCESS; 

}