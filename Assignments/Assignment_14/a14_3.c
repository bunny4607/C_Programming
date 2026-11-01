#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : display non factos
//  Description     : prints non factors of a number 
//  Input           : int 
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
void displayNonFact (int iNo ){
    int i = 0 ; 
    for (i = 1 ; i <= iNo ; i++){
        if(iNo % i != 0 ){
            printf("%d\t", i); 
        }
        
    }

}
int main(){
    int iValue = 0 ; 

    printf("Enter a number : "); 
    scanf("%d", &iValue ); 
    
    displayNonFact(iValue ); 


    return EXIT_SUCCESS; 

}