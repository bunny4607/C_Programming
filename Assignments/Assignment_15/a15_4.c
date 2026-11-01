#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Funciton name   : multiplicqation 
//  Description     : takes 3 numbers as ip from user and returns its multiplication 
//  Input           : int , int , int  
//  Output          : int 
//  Author          : Vedant Kalidas Barne
//  Date            : 1/11/2026
//
//////////////////////////////////////////////////////////
int Mult(int iNo1 , int iNo2, int iNo3 ){ 
    int iMult = 0 ; 
    iMult = iNo1 * iNo2 * iNo3 ; 
    return iMult; 


}
int main(){
    int iValue1 = 0 ;
    int iValue2 = 0 ;
    int iValue3 = 0; 

    int iRet = 0 ; 


    printf("Enter first number  :") ;
    scanf("%d", &iValue1); 

    printf("Enter second number  :") ;
    scanf("%d", &iValue2); 

    printf("Enter third number  :") ;
    scanf("%d", &iValue3); 


    iRet = Mult(iValue1, iValue2,iValue3 ) ; 

    printf("%d", iRet ); 


     


    return EXIT_SUCCESS;

}