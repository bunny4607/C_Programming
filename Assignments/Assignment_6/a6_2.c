#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



//////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : eligiblity for admission 
//  Description     : checks eligiblity based on marks and age
//  input           : float , int 
//  output          : bool 
//  Author          : Vedant Kalidas Barne
//  Date            : 21/10/2026
//////////////////////////////////////////////////////////////////////////////

bool Eligiblity(float fMarks, int iAge)
{
    if (iAge >=17 && fMarks>=60.0) return true ;
    else return false;
}
int main(){
    int iAge =0 ;
    float fMarks = 0.0f;
    bool bret = false ;

    printf("Enter marks : \n");
    scanf("%f", &fMarks);

    printf("Enter age :\n");
    scanf("%d", &iAge);

    if (iAge<0 || fMarks<0) printf("Invalid input \n");

    bret = Eligiblity(fMarks, iAge);

    if (bret == true ) printf("eligible ");
    else if (bret == false ) printf("not Eligible");

    return EXIT_SUCCESS;

}

    

