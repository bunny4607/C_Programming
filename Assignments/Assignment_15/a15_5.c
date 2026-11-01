#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : percent 
//  Description     : takes total and obtained from user and returns percentage 
//  Input           : int , int  
//  Output          : float 
//  Author          : Vedant Kalidas Barne
//  Date            : 1/11/2026
//
//////////////////////////////////////////////////////////

float Percent(int iNo1 , int iNo2){ 
    float fPer = 0 ; 
    fPer = ((float)iNo2/ (float)iNo1) *100 ; 
    return fPer; 


}
int main(){
    int iValue1 = 0 ;
    int iValue2 = 0 ;


    float fRet = 0 ; 


    printf("Enter total number  :") ;
    scanf("%d", &iValue1); 

    printf("Enter obtained number  :") ;
    scanf("%d", &iValue2); 
 


    fRet = Percent(iValue1, iValue2 ) ; 

    printf("%f", fRet ); 


     


    return EXIT_SUCCESS;

}