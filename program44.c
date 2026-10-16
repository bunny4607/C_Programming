#include<stdio.h>
#include<stdlib.h>
    //////////////////////////////////////////////////
    /// 
    ///     Function name : Average 
    ///     Description : Returns average of two numbers 
    ///     Input : int , int 
    ///     Output : float
    ///     Author : Vedant Kalidas Barne 
    ///     Date : 11/10/2026
    /// 
    //////////////////////////////////////////////////
float Avg (int iNo1, int iNo2){
    float fResult = 0.0f;
    fResult = (iNo1 + iNo2 ) /2;
    return fResult; 
}
int main(){
    int iValue1 = 0, iValue2=0; 
    float fResult =0.0f; 
    
    printf("Enter first value : \n");
    scanf("%d", &iValue1);

    printf("Enter second value : \n");
    scanf("%d", &iValue2);

    fResult = Avg(iValue1, iValue2);
    printf("Average is : %f\n", fResult);


    return EXIT_SUCCESS;
}