#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
.....................................................................

Function name : difference
Description : frequency of small characters minus frequency of capital characters
input : char *
output : int
Author : Vedant Kalidas Barne
Date : 8/11/2026

.....................................................................
*/
int difference(char *cValue){
    int iSmall = 0 ;
    int iCapital = 0 ;

    while(*cValue != '\0'){
        if(*cValue >= 'a' && *cValue <= 'z'){
            iSmall++ ;
        }
        else if(*cValue >= 'A' && *cValue <= 'Z'){
            iCapital++ ;
        }
        cValue++ ;
    }

    return iSmall - iCapital ;
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

    iRet = difference(arr);

    printf("%d", iRet);
    return EXIT_SUCCESS ;

}
/*
.....................................................................

                                Sample output


Enter string :MarvellouS
6%

vedantbarne@Vedants-MacBook-Air-2 Assignment_27 % ./myexe
Enter string :Marvellous
8%

.....................................................................
*/