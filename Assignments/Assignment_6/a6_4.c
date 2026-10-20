#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



//////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : triangle  
//  Description     : checks if triangle 
//  input           : int , int ,int   
//  output          : bool  
//  Author          : Vedant Kalidas Barne
//  Date            : 21/10/2026
//////////////////////////////////////////////////////////////////////////////

bool Triangle(int iNo1, int iNo2, int iNo3)
{
    if (((iNo1+iNo2) > iNo3) || (iNo2+iNo3)>iNo1 || (iNo3+iNo1) > iNo2 ){
        return true;
    }else return false;

}
int main(){
    int iSide1 = 0 ;
    int iSide2 = 0;
    int iSide3 = 0;

    bool iret = false ; 

    printf("Enter  side : \n");
    scanf("%d", &iSide1);

    printf("Enter  side : \n");
    scanf("%d", &iSide2);

    printf("Enter  side : \n");
    scanf("%d", &iSide3);

    iret = Triangle  (iSide1, iSide2, iSide3 );

    if (iret == true ) printf("It is a triangle \n");
    else if (iret == false )printf("Not a triangle \n");
    return EXIT_SUCCESS;

}

    

