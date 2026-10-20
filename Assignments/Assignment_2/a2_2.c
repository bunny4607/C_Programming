//accept one number from user and print that number of stars on screen 

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
//
////////////////////////////////////////////////////////////////////
void Stars(int iNo1)
{
    int iNo2 = 0;
    while (iNo1 > iNo2 )
    {
        printf("*\t");
        iNo1--;
    }
}
int main()
{
    int iValue = 0 ;
    
    printf("Enter a number : \n");
    scanf("%d", &iValue );

    Stars(iValue);

    
    return EXIT_SUCCESS;

}