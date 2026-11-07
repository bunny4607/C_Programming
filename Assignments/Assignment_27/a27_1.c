#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
.....................................................................

Function name : countCapital
Description : counts capital characters in a string
input : char *
output : int
Author : Vedant Kalidas Barne
Date : 8/11/2026

.....................................................................
*/
int countCapital(char *cValue){
    int iCnt = 0 ;

    while(*cValue != '\0'){
        if(*cValue >= 'A' && *cValue <= 'Z'){
            iCnt++ ;
        }
        cValue++ ;
    }

    return iCnt ;
}
/*
.....................................................................


                            Entry point


.....................................................................
*/
int main(){

    char arr[100] = {'\0'};
    int iRet = 0 ;

    printf("Enter string :");
    if(scanf(" %99[^\n]", arr) != 1){
        fprintf(stderr, "Invalid input");
        return EXIT_FAILURE ;
    }

    iRet = countCapital(arr);

    printf("%d", iRet);
    return EXIT_SUCCESS ;

}
/*
.....................................................................

                                Sample output


Enter string :Marvellous Multi OS
4%

vedantbarne@Vedants-MacBook-Air-2 Assignment_27 % ./myexe
Enter string :abc
0%

.....................................................................
*/