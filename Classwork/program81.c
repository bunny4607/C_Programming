//input 10
//output 1 3 5 7 9
#include<stdio.h>
#include<stdlib.h>

int summation(int iNo){
    int iCnt = 0;
    int iSum = 0; //this should be initialied with 1
    for (iCnt = 1; iCnt <=iNo; iCnt++){
        iSum = iCnt * iSum;
    }
    return iSum;

}
int main(){

    int iValue = 0;
    int iRet = 0;
    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = summation(iValue);

    printf("summation is : %d \n", iRet);   

    return EXIT_SUCCESS;
}