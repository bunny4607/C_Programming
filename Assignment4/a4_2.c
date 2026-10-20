//accept number from user and determine weather its even or odd 

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
// 
//  Function name       :check even 
//  Description         :checks if number taken from user is even or odd
//  Input               :int
//  Output              :int
//  Date                :20/10/2026
//
/////////////////////////////////////////////////////////

int checkEven(int iNo)
{
    if (iNo % 2 == 0) return 1;
    else return 0;
}

int main()
{

    int iValue = 0;
    int retValue = 0;
    printf("Enter a number : \n");
    scanf("%d", &iValue );

    retValue = checkEven(iValue );
    if(retValue == 1) printf("even\n");
    else if(retValue == 0) printf("odd");

    return EXIT_SUCCESS;

}