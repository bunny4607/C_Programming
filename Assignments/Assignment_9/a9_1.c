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
void pattern (int iNo ) {
    if(iNo < 0 ) iNo = -iNo ; 

    int i = 0 ;
    

    for (i = -iNo ; i <= iNo ; i++){
        if(i < 0 ) printf("*\t"); 
        else if (i == 0 ) printf(""); 
        else if (i>0 ) printf("#\t"); 


    }
    
}
int main()
{

    int iValue = 0 ; 
    printf("Enter a number : ");
    scanf("%d", &iValue); 

    pattern(iValue ); 


    return EXIT_SUCCESS;

}