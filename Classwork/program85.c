/*
-----------------------------------------------------
                operation &&
-----------------------------------------------------
    Result 1        Result 2         Final result

    TRUE            TRUE                    TRUE 
    TRUE            FALSE                   FALSE
    FALSE           TRUE                    FALSE (Short Circuit)
    FALSE           FALSE                   FALSE (short circuit)

-----------------------------------------------------
-----------------------------------------------------



*/
#include<stdio.h>
#include<stdlib.h>
void D3(int iNo)
{
    if (((iNo % 5) == 0) &&((iNo % 3) ==0) ) printf("Divisible by 5 and 3 at same time\n");
    else printf("Not divisible by 5 and 3 at same time\n");
}
int main()
{
    int iValue = 0;

    printf("Enter value of Number : \n");
    scanf("%d", &iValue);

    D3(iValue);
    return EXIT_SUCCESS;
}