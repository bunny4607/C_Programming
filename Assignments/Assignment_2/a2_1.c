
#include<stdio.h>
#include <stdlib.h>
////////////////////////////////////////////////////////////////////
//
//  Function name : Print stars 
//  Description : take i/p from user and those many number of stars
//  input : int 
//  output : void 
//  Author : Vedant Kaldias Barne 
//  date : 18/10/2026
////////////////////////////////////////////////////////////////////


void Display(int iNo)
{
    int iCount = 0;
    while (iCount <= iNo)
    {
        printf("*\t");
        iCount ++; 
    }
}
int main()
{
    int iValue = 0; 
    printf("Enter a number : \n");
    scanf("%d", &iValue );

    Display(iValue);

    return EXIT_SUCCESS;


}