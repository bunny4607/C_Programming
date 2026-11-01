#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : greater than 100 
//  Description     : takes input from user and checks if it is greater than 100 
//  Input           : int 
//  Output          : bool 
//  Author          : Vedant Kalidas Barne
//  Date            : 1/11/2026
//
//////////////////////////////////////////////////////////
bool Greaterthan100(int iNo ){
    if (iNo > 100 ) return true;
    else return false ; 
}
int main(){
    int iValue = 0 ; 
    bool iRet = false ; 

    printf("Enter a number : "); 
    scanf("%d", &iValue); 

    iRet = Greaterthan100(iValue ) ; 
    if (iRet == true ) printf("Greater "); 
    else if (iRet == false ) printf("Smaller "); 
    

    return EXIT_SUCCESS;

}