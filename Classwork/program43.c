#include<stdio.h>
#include<stdlib.h>
    //////////////////////////////////////////////////
    /// 
    ///     Function name : Maximum of two numbers
    ///     Description : Return maximum of two numbers
    ///     Input : int , int 
    ///     Output : int 
    ///     Author : Vedant Kalidas Barne 
    ///     Date : 11/10/2026
    /// 
    //////////////////////////////////////////////////
int Minimum (int iNo1,int  iNo2){
    
    if (iNo1 < iNo2){
        
        return iNo1;
    }else {
        
        return iNo2;
    }
    


}
int main()
{
    int iValue1= 0 , iValue2 = 0, iResult =0 ; 

    printf("Enter first number : \n");
    scanf("%d", &iValue1);
    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    iResult = Minimum(iValue1, iValue2);
    printf("Minimum is %d", iResult);

    

    return EXIT_SUCCESS;
}