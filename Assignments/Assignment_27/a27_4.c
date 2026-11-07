#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
.....................................................................

Function name : chkVowel
Description : true if string contains a vowel else false
input : char *
output : bool
Author : Vedant Kalidas Barne
Date : 8/11/2026

.....................................................................
*/
bool chkVowel(char *cValue){
    bool bRet = false ;

    while(*cValue != '\0'){
        if(*cValue == 'a' || *cValue == 'e' || *cValue == 'i' || *cValue == 'o' || *cValue == 'u' ||
           *cValue == 'A' || *cValue == 'E' || *cValue == 'I' || *cValue == 'O' || *cValue == 'U'){
            bRet = true ;
            break ;
        }
        cValue++ ;
    }

    return bRet ;
}
/*
.....................................................................


                            Entry point


.....................................................................
*/
int main(){

    char arr[100] = {'\0'};
    bool bRet = false ;

    printf("Enter string :");
    if(scanf(" %99[^\n]", arr) != 1){
        fprintf(stderr, "Invalid input");
        return EXIT_FAILURE ;
    }

    bRet = chkVowel(arr);

    if(bRet == true ) printf("Contains Vowel");
    else printf("There is no Vowel");
    return EXIT_SUCCESS ;

}
/*
.....................................................................

                                Sample output


Enter string :marvellous
Contains Vowel%

vedantbarne@Vedants-MacBook-Air-2 Assignment_27 % ./myexe
Enter string :Demo
Contains Vowel%

vedantbarne@Vedants-MacBook-Air-2 Assignment_27 % ./myexe
Enter string :xyz
There is no Vowel%

.....................................................................
*/