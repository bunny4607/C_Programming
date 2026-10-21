#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iFact = 0;
    iFact =1 ;
    int iCount = 0;
    for(iCount =1 ; iCount <= iNo ; iCount ++)
    {
        iFact = iFact *iCount ;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int Fact = 0;

    printf("Enter value of Number : \n");
    scanf("%d", &iValue);

    Fact = Factorial(iValue);
    printf("Factorial is : %d",Fact );

    return EXIT_SUCCESS;
}