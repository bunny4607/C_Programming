#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : pattern  
//  Description     : prints pattern 
//  Input           : int
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
void pattern (int iNo ){
    for (int i = 1 ; i <= iNo ; i++){
        printf("$\t"); printf("*\t");
    }
}
int main(){
    int iValue = 0 ; 

    printf("Enter a number : ");
    scanf("%d", &iValue );

    pattern(iValue);

    return EXIT_SUCCESS;

}