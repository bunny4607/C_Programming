#include<stdio.h>
#include<stdlib.h>
void D3(int iNo)
{
    if (iNo % 3 == 0 ) printf("Divisible by 3\n");
    else printf("Not divisible by 3\n");
}
int main()
{
    int iValue = 0;

    printf("Enter value of Number : \n");
    scanf("%d", &iValue);

    D3(iValue);
    return EXIT_SUCCESS;
}