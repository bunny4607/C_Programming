#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue = 0;
    int iCount =0;


    printf("Enter value of Number : \n");
    scanf("%d", &iValue);

    for(iCount =1 ; iCount <= iValue ; iCount ++)
    {
        printf("%d\n", iCount);
    }


    return EXIT_SUCCESS;
}