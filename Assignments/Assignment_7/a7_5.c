#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : multiples  
//  Description     : prints first five mutiples 
//  Input           : int
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
void firstFiveMultiples(int iNo ) {
    int i = 0 ;
    for (i = 1; i<=5; i++){
        printf("%d\t", i*iNo);

    }
}

int main(){
    int iValue = 0 ;

    printf("Enter a number " );
    scanf("%d", &iValue ); 

    firstFiveMultiples(iValue );

    return EXIT_SUCCESS;
}