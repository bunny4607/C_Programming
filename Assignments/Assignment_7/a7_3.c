#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : number line   
//  Description     : takes i/p form user and prints that much of number line 
//  Input           : int
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
void noLine(int iNo ){
    int i = 0; 
    for (i = -iNo ; i <= iNo ; i++){
        printf("%d\t" ,i );
    }
}
int main(){
    int iValue =0 ; 

    printf("Enter number : ");
    scanf("%d", &iValue ); 

    noLine(iValue);

    return EXIT_SUCCESS;



}