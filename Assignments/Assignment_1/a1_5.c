#include<stdio.h>
#include <stdlib.h>
void Accept(int iNo)
{
    int iCnt = 0 ;
    for (iCnt =1; iCnt<=iNo; iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue  =0 ;
    printf("enter a number : ");
    scanf("%d", &iValue);

    Accept(iValue );

    return EXIT_SUCCESS;
}