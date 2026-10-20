#include <stdio.h>
#include <stdlib.h>




/////////////////////////////////////////////////////////
// 
//  Function name       :divisiblity by 3 and 5
//  Description         :checks if a number is divible by 3 and 5 or one of them 
//  Input               :int 
//  Output              :int 
//  Date                :21/10/2026
//
/////////////////////////////////////////////////////////
int  Divide(int iNo)
{
    if ((iNo %3 ==0) && (iNo %5 ==0 )) return 1;
    else if (iNo %3 ==0)  return 2;
    else if (iNo %5 ==0 ) return 3;
    else return 0;
}


int main()

{
    int iValue= 0.0f;
    int iret = 0;



    printf("enter number  : \n");
    scanf("%d", &iValue);

    
    iret = Divide(iValue);
    if (iret == 1 ) printf("Number is divisible by both 3 and 5 \n");
    else if (iret == 2 ) printf("Number is divible by 3 only ");
    else if (iret == 3 ) printf("Number is divible by 5 only ");
    else if (iret == 0 ) printf("Number is not divible by 3 or 5");




    return EXIT_SUCCESS;

}