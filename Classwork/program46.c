#include<stdio.h>
#include<stdlib.h>
    //////////////////////////////////////////////////
    /// 
    ///     Function name : Average 
    ///     Description : Returns average of three numbers 
    ///     Input : int , int , int
    ///     Output : float
    ///     Author : Vedant Kalidas Barne 
    ///     Date : 11/10/2026
    /// 
    //////////////////////////////////////////////////
float Avg (int iNo1, int iNo2, int iNo3){
    float fResult = 0.0f;
    fResult = ((float)iNo1 + (float)iNo2+ (float)iNo3 ) /3; //typecasting
    return fResult; 
}
int main(){
    int iValue1 = 0, iValue2=0, iValue3 = 0 ; 
    float fResult =0.0f; 
    
    printf("Enter first value : \n");
    scanf("%d", &iValue1);

    printf("Enter second value : \n");
    scanf("%d", &iValue2);

    printf("Enter third value : \n");
    scanf("%d", &iValue3);

    

    fResult = Avg(iValue1, iValue2, iValue3);
    printf("Average is : %f\n", fResult);


    return EXIT_SUCCESS;
}