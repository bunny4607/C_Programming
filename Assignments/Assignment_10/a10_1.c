#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : area of cicle 
//  Description     : takes radius from user and calcualtes area of circle 
//  Input           : int  
//  Output          : double 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
double CalculateArea (int iNo ) {
    double pi = 3.14 ; 
    double area = pi * iNo *iNo ; 
    
    return area ; 
}
int main()
{
    int iRadius = 0 ; 
    int iRet = 0 ; 

    printf("Enter radius : "); 
    scanf("%d", &iRadius); 

    iRet = CalculateArea(iRadius); 

    printf("Radius is : %d" , iRet ); 




    return EXIT_SUCCESS; 

}