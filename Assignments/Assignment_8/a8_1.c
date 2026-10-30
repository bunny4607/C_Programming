#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : size  
//  Description     : compares size
//  Input           : int 
//  Output          : int 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
int size(int iNo ) {
    if(iNo <0 ){
        iNo = -iNo ; 
    }
    if(iNo <= 50) return 1; 
    else if(iNo < 100 && iNo > 50) return 2; 
    else return 3; 
      

}

int main(){
    int iValue = 0 ; 
    int iRet = 0 ;


    printf("Enter a number : ");
    scanf("%d", &iValue); 
    
    iRet = size(iValue ); 

    if(iRet == 1) printf("Small "); 
    else if (iRet == 2 ) printf("Medium"); 
    else if (iRet == 3 ) printf("Large "); 

    


    return EXIT_SUCCESS; 

}