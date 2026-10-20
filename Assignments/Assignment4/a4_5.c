//checking disiblity by 5

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////
// 
//  Function name       :Divisiblity by 5
//  Description         :checking if number taken from user is divisble by 5
//  Input               :int
//  Output              :boolean
//  Date                :20/10/2026
//
//////////////////////////////////////////////////////////////////
bool Divisble_by5(int iNo)
{
    return (iNo % 5 ==0);
}
int main()
{
    int iValue =0;
    bool iRet = false ;
    printf("Enter a number : ");
    scanf("%d", &iValue);

    iRet = Divisble_by5(iValue );

    if (iRet == true ) printf("The number is divisble by 5 \n");
    if (iRet == false ) printf("The number is not divisble by 5 \n");
    

    return EXIT_SUCCESS;

}
