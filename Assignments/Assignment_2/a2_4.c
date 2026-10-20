//Accept two numbers and display first numebr in second number of times 
// input : 12   5
//ooutput : 12  12  12  12  12
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function name : Printing numbers 
//  Description : printing no1 no2 times
//  input : int , int 
//  output : void 
//  Author : Vedant Kaldias Barne 
//  date : 18/10/2026
////////////////////////////////////////////////////////////////////

void Display(int iNo1, int iNo2)
{
    if(iNo2<0){
        iNo2 = -iNo2;
    }
    int iNo3 = 0;
    for(iNo3 =1 ; iNo3 <=iNo2; iNo3++ )
    {
        printf("%d\t", iNo1);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter first number : \n");
    scanf("%d", &iValue);

    printf("Enter second number : \n");
    scanf("%d", &iCount);

    Display(iValue , iCount );


    return EXIT_SUCCESS;

}