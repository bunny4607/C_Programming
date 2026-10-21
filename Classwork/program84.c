#include<stdio.h>
#include<stdlib.h>
void D3(int iNo)
{
    if ((iNo % 5) == 0 ) printf("Divisible by 5\n");
    else printf("Not divisible by 5\n");
}
int main()
{
    int iValue = 0;

    printf("Enter value of Number : \n");
    scanf("%d", &iValue);

    D3(iValue);
    return EXIT_SUCCESS;
}