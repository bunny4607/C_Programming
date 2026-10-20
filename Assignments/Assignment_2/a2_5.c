//accept number form user and check wheather number is even or odd 

#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////
//
//  Function name : Even / Odd 
//  Description :Check if number is even or odd 
//  input : int 
//  output : void 
//  Author : Vedant Kaldias Barne 
//  date : 18/10/2026
////////////////////////////////////////////////////////////////////
void ChkEven(int iNo)
{
    if (iNo%2 == 0 ){
        printf("Even");
    }else printf("odd");
}
int main()
{
    int iValue = 0; 
    
    printf("enter a number : \n");
    scanf("%d", &iValue );

    ChkEven(iValue );

    return EXIT_SUCCESS;

}