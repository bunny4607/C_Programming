#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



/////////////////////////////////////////////////////////
// 
//  Function name       :leap year  
//  Description         :checks greatest among 3 numbers
//  Input               :int
//  Output              :bool
//  Date                :21/10/2026
//
/////////////////////////////////////////////////////////
bool checkLeap(int iNo)
{
    return ((iNo % 400 == 0) || (iNo%4==0 && iNo%100 !=0) );
}


int main()

{
    int iValue= 0;

    bool iret = false ;

    printf("enter year : \n");
    scanf("%d", &iValue);

    iret = checkLeap(iValue);

    if (iret == true ) printf("leap year ");
    else printf("Not a leap year ");

    


    return EXIT_SUCCESS;

}