#include<stdio.h>
#include<stdlib.h>
void D3(int iNo)
{
    if (iNo % 5 ==0 )
    {
        if(iNo % 3 == 0 ) 
        {
            printf("the number is divisibale by both 3 and 5\n");
        }
    }
    else {
        printf("Number is not divisible \n");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter value of Number : \n");
    scanf("%d", &iValue);

    D3(iValue);
    return EXIT_SUCCESS;
}