#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



/////////////////////////////////////////////////////////
// 
//  Function name       :greatest 
//  Description         :checks greatest among 3 numbers
//  Input               :int,int ,int 
//  Output              :int
//  Date                :21/10/2026
//
/////////////////////////////////////////////////////////
int checkGreatest(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 > iNo2 && iNo1> iNo3 ) return 1;
    else if (iNo2> iNo1 && iNo2 > iNo3) return 2;
    else return 0;

}


int main()

{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    int iret = false ;

    printf("enter first number : \n");
    scanf("%d", &iValue1);

    printf("enter second number : \n");
    scanf("%d", &iValue2);

    printf("enter third number : \n");
    scanf("%d", &iValue3);

    iret = checkGreatest(iValue1, iValue2,iValue3);

    if (iret == 1) printf("%d is the greatest number ", iValue1);
    else if (iret ==2) printf("%d is the greatest number ", iValue2);
    else if (iret == 0 ) printf("%d is the greatest numebr ", iValue3 );


    return EXIT_SUCCESS;

}