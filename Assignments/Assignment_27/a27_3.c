#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
.....................................................................

Function name : Difference
Description : frequency of small characters minus frequency of capital characters
input : char *
output : int
Author : Vedant Kalidas Barne
Date : 8/11/2026

.....................................................................
*/
int Difference(char *str){
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0'){
        if(*str >= 'a' && *str <= 'z'){
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z'){
            iCapital++;
        }
        str++;
    }

    return iSmall - iCapital;
}
/*
.....................................................................


                            Entry point


.....................................................................
*/
int main(){

    char arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string :");
    if(scanf(" %99[^\n]", arr) != 1){
        fprintf(stderr, "Invalid input");
        return EXIT_FAILURE;
    }

    iRet = Difference(arr);

    printf("%d", iRet);
    return EXIT_SUCCESS;

}
/*
.....................................................................

                                Sample output


Enter string :MarvellouS
6

Enter string :Marvellous
8

.....................................................................
*/