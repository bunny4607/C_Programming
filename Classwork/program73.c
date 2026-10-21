// Input 4 
// Output 1 2 3 4 
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCount = 0;
    for (int iCount =1 ; iCount <= iNo; iCount ++)
    {
        printf("%d\t", iCount);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the frequency :  ");
    scanf("%d" , &iValue );
    Display(iValue);

    return EXIT_SUCCESS;


    
}
