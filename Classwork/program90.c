#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{
    int iSum = 0;
    int iCount = 0;
    for(iCount =1 ; iCount <= iNo ; iCount ++)
    {
        iSum = iSum + iCount ;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int Sum = 0;

    printf("Enter value of Number : \n");
    scanf("%d", &iValue);

    Sum = Summation(iValue);
    printf("Summation is : %d",Sum );

    return EXIT_SUCCESS;
}