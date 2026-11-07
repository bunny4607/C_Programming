#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
.....................................................................

Function name : CountSmall
Description : counts small characters in a string
input : char *
output : int
Author : Vedant Kalidas Barne
Date : 8/11/2026

.....................................................................
*/
int CountSmall(char *str){
    int iCnt = 0;

    while(*str != '\0'){
        if(*str >= 'a' && *str <= 'z'){
            iCnt++;
        }
        str++;
    }

    return iCnt;
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

    iRet = CountSmall(arr);

    printf("%d", iRet);
    return EXIT_SUCCESS;

}
/*
.....................................................................

                                Sample output


Enter string :Marvellous
9

Enter string :ABC
0

.....................................................................
*/