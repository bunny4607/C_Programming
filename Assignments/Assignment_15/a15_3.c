#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : check equal 
//  Description     : takes 2 numbers as ip from user and checks if those are equal 
//  Input           : int , int  
//  Output          : bool 
//  Author          : Vedant Kalidas Barne
//  Date            : 1/11/2026
//
//////////////////////////////////////////////////////////
bool checkEqual(int iNo1 , int iNo2){
    if (iNo1 == iNo2 ) return true ; 
    else return false ; 

}
int main(){
    int iValue1 = 0 ;
    int iValue2 = 0 ;
    bool iRet = false ; 


    printf("Enter first number  :") ;
    scanf("%d", &iValue1); 

    printf("Enter second number  :") ;
    scanf("%d", &iValue2); 


    iRet = checkEqual(iValue1, iValue2) ; 

    if (iRet == true ) printf("Both numbers are equal ") ;
    else if (iRet == false ) printf("Both numbers are not equal "); 


    return EXIT_SUCCESS;

}