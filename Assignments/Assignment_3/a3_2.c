#include<stdio.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : display factor
//  Description     : displaying factors of number taken from user 
//  Input           : int
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 20/10/2026
//
//////////////////////////////////////////////////////////
void DisplayFactor (int iNo)
{
    int i = 0 ;
    if(iNo<0) iNo = - iNo ; 
    
    for (i =1 ; i <= iNo/2; i++ )
    {
        if(i%2 ==0 )
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("enter a number \n");
    scanf("%d", &iValue );

    DisplayFactor(iValue);
    return 0;
}