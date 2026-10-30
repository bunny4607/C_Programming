#include<stdio.h>
#include<stdlib.h> 
//////////////////////////////////////////////////////////
//
//  Funciton name   : even fact  
//  Description     : prints even fact 
//  Input           : int 
//  Output          : int 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
int EvenFact (int iNo ) {
    if(iNo < 0 )  iNo = -iNo ; 
    int i = 0; 
    int fact = 1 ;
    for (i =1 ; i <= iNo ; i++) {
        if(i%2 == 0 ){
            fact = fact* i ; 
        }
        

    }
    return fact ; 
    
}
int main()
{

    int iValue = 0 ; 
    int iRet = 0 ;
    printf("Enter a number : ");
    scanf("%d", &iValue); 

    iRet = EvenFact(iValue); 

    printf("%d", iRet ); 

    return EXIT_SUCCESS;

}