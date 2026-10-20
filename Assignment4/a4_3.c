//greater of 2 nos 

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
// 
//  Function name       :greater of 2 nos  
//  Description         :take ip from user and print greater number 
//  Input               :int, int 
//  Output              :int
//  Date                :20/10/2026
//
/////////////////////////////////////////////////////////

int Greater(int iNo1, int iNo2)
{
    if (iNo1 > iNo2) return 1;
    else return 0;
    
}

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;
    int retValue =0 ;

    printf("Enter first number : \n");
    scanf("%d", &iValue1 );

    printf("Enter second number : \n");
    scanf("%d", &iValue2 );

    retValue = Greater(iValue1, iValue2);

    if (retValue == 1) printf("%d is greater than %d", iValue1, iValue2);
    else if(retValue ==0) printf("%d is greater than %d", iValue2, iValue1);

    

    return EXIT_SUCCESS;

}