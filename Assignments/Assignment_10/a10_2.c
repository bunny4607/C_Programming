#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : calculates area of rect 
//  Description     : takes i/p from user for length and breadth and calculates area of rectangle
//  Input           : float,float
//  Output          : float 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
float CalculateArea (float iNo1, float iNo2  ) {
    float area = iNo1 * iNo2 ;
    
    return area; 
}
int main()
{
    float length = 0.0f; 
    float breadth  = 0.0f; 

    float iRet = 0.0f; 

    printf("Enter length : \n"); 
    scanf("%f", &length); 

    printf("Enter breadth : \n"); 
    scanf("%f", &breadth); 

    iRet = CalculateArea(length, breadth); 

    printf("area of rectangle is : %f",iRet  ); 





    return EXIT_SUCCESS; 

}