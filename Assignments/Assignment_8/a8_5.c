#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : rev table  
//  Description     : prints  rev table 
//  Input           : int 
//  Output          : void  
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
void RevTable(int iNo ) {
    int i = 0 ;
    for (i = 10 ; i >= 1; i--) {
        printf("%d\t", i*iNo); 
    }
    


}

int main(){
    int iValue = 0 ; 

    printf("Enter a number : ");
    scanf("%d", &iValue); 

    RevTable(iValue ); 


    return EXIT_SUCCESS; 

}