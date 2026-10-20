//Input : A | output : a
//Input : b | output : B

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Funciton name   : capital or small 
//  Description     : changes capital to small and small to capital 
//  Input           : char
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 20/10/2026
//
//////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c", cValue - 32);
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c", cValue + 32);
    }
}
int main()
{

    char cValue = '\0';

    printf("Enter a character : \n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);
    return EXIT_SUCCESS;



}