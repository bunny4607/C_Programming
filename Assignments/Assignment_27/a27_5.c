#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
.....................................................................

Function name : reverse
Description : displays the string in reverse order
input : char *
output : void
Author : Vedant Kalidas Barne
Date : 8/11/2026

.....................................................................
*/
void reverse(char *cValue){
    char *pStart = cValue ;
    char *pEnd = cValue ;
    char cTemp = '\0';

    while(*pEnd != '\0'){
        pEnd++ ;
    }
    pEnd-- ;     // last valid character

    while(pStart < pEnd){
        cTemp = *pStart ;
        *pStart = *pEnd ;
        *pEnd = cTemp ;

        pStart++ ;
        pEnd-- ;
    }

    printf("%s", cValue);
}
/*
.....................................................................


                            Entry point


.....................................................................
*/
int main(){

    char arr[100] = {'\0'};

    printf("Enter string :");
    if(scanf(" %99[^\n]", arr) != 1){
        fprintf(stderr, "Invalid input");
        return EXIT_FAILURE ;
    }

    reverse(arr);

    return EXIT_SUCCESS ;

}
/*
.....................................................................

                                Sample output


Enter string :MarvellouS
SuollevraM%

vedantbarne@Vedants-MacBook-Air-2 Assignment_27 % ./myexe
Enter string :abc
cba%

.....................................................................
*/