#include<stdio.h>
#include<stdlib.h>

void Print(int iNo)
{
    int iCount = 0;
    for(iCount =1 ; iCount <= iNo ; iCount ++)
    {
        printf("%d\n", iCount);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter value of Number : \n");
    scanf("%d", &iValue);

    Print(iValue);

    return EXIT_SUCCESS;
}