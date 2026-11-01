#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : display factos
//  Description     : prints factors of a number of a number in decreasing order
//  Input           : int 
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
void displayFact (int iNo ){
    int i = 0 ; 
    for (i = iNo ; i >= 1 ; i--){
        if(iNo % i == 0 ){
            printf("%d\t", i); 
        }
        
    }

}
int main(){
    int iValue = 0 ; 

    printf("Enter a number : "); 
    scanf("%d", &iValue ); 
    
    displayFact(iValue ); 


    return EXIT_SUCCESS; 

}