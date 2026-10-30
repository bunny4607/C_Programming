#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : odd Display   
//  Description     : prints odd fact 
//  Input           : int
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
void oddDisplay(int iNo ){
    int i = 0 ;
    for (i = 1 ; i <= iNo ; i++){
        if (i % 2 != 0 ){
            printf("%d\t" , i); 
        }
    }
}

int main()
{
    int iValue = 0 ; 

    printf("Enter a number "); 
    scanf("%d", &iValue ); 

    oddDisplay(iValue );

    return EXIT_SUCCESS;

}