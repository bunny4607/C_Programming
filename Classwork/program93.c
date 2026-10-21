#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    long  int iFact = 0;
    
    int iCount = 0;
    for(iCount =1, iFact =1  ; iCount <= iNo ; iCount ++)
    {
        iFact = iFact *iCount ;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    long int iFact = 0;

    printf("Enter value of Number : \n");
    scanf("%d", &iValue);

    iFact = Factorial(iValue);
    printf("Factorial is : %ld",iFact );

    return EXIT_SUCCESS;
}