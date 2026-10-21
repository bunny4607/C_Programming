//input 10
//output 1 3 5 7 9
#include<stdio.h>
#include<stdlib.h>


int main(){

    int iCnt = 0;
    int iSum = 0;

    // isum = 0+1  =1 
    iSum = iSum +iCnt;
    iCnt++;

    // isum = 1+2 = 3
    iSum = iSum +iCnt;
    iCnt++;

    //isum = 3+3=6
    iSum = iSum +iCnt;
    iCnt++;

    //isum = 6+4 =10 
    iSum = iSum +iCnt;
    iCnt++;

    //isum = 10+5 = 15
    iSum = iSum +iCnt;
    iCnt++;

    printf("%d", iSum);

    return EXIT_SUCCESS;
}
