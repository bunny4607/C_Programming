// Accept a number form the user if the number is less than 10 then print "Hello" otherwise "Demo"
#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////
//
//  Function name : Less than 10
//  Description : Checks if number is less than 10
//  input : int 
//  output : void 
//  Author : Vedant Kaldias Barne 
//  date : 18/10/2026
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo<10) printf("Hello\n");
    else printf("Demo");
}

int main()
{
    int iValue =0 ;
    printf("enter a number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;

}