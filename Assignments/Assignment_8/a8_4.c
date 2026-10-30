#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : table  
//  Description     : prints table
//  Input           : int 
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
void table(int iNo ) {
    int i = 0 ;
    for (i = 1 ; i <= 10; i++) {
        printf("%d\t", i*iNo); 
    }
    


}

int main(){
    int iValue = 0 ; 

    printf("Enter a number : ");
    scanf("%d", &iValue); 

    table(iValue ); 


    return EXIT_SUCCESS; 

}