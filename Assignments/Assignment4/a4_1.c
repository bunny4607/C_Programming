//taking i/p from user and determining weather the number is positive negative or zero 

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
// 
//  Function name       :Check_integer 
//  Description         :checks if number taken from user is positve, negative or zero 
//  Input               :int
//  Output              :int
//  Date                :20/10/2026
//
/////////////////////////////////////////////////////////

int CheckInt(int iNo)
{
    if(iNo>0) return 1;
    else if(iNo<0) return 2;
    else return 3;
}

int main()
{

    int iValue = 0;
    int retValue = 0;
    printf("Enter a number : \n");
    scanf("%d", &iValue );

    retValue = CheckInt(iValue);
    if (retValue == 1) printf("Entered number is positive\n");
    else if(retValue == 2) printf("Entered number is negative\n");
    else if (retValue ==3) printf("Entered number is zero\n");



    return EXIT_SUCCESS;

}