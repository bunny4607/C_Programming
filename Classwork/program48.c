#include<stdio.h>
#include<stdlib.h>
    //////////////////////////////////////////////////
    /// 
    ///     Function name : Maximum 
    ///     Description : Returns maximum of three numbers 
    ///     Input : int , int  , int
    ///     Output : int 
    ///     Author : Vedant Kalidas Barne 
    ///     Date : 11/10/2026
    /// 
    //////////////////////////////////////////////////
float Maximum  (int iNo1, int iNo2, int iNo3){
     if ((iNo1> iNo2) || (iNo1>iNo3)) return iNo1;
     else if((iNo2>iNo1) || (iNo2>iNo3)) return iNo2;
     else return iNo3;
}
int main(){
    int iValue1 = 0, iValue2=0, iValue3 = 0 ; 
    int iResult =0.0; 
    
    printf("Enter first value : \n");
    scanf("%d", &iValue1);

    printf("Enter second value : \n");
    scanf("%d", &iValue2);

    printf("Enter third value : \n");
    scanf("%d", &iValue3);

    

    iResult = Maximum(iValue1, iValue2, iValue3);
    printf("Maximum is : %d\n", iResult);


    return EXIT_SUCCESS;
}