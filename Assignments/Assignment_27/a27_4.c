#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
.....................................................................

Function name : ChkVowel
Description : true if string contains a vowel else false
input : char *
output : bool
Author : Vedant Kalidas Barne
Date : 8/11/2026

.....................................................................
*/
bool ChkVowel(char *str){
    bool bRet = false;

    while(*str != '\0'){
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U'){
            bRet = true;
            break;
        }
        str++;
    }

    return bRet;
}
/*
.....................................................................


                            Entry point


.....................................................................
*/
int main(){

    char arr[100] = {'\0'};
    bool bRet = false;

    printf("Enter string :");
    if(scanf(" %99[^\n]", arr) != 1){
        fprintf(stderr, "Invalid input");
        return EXIT_FAILURE;
    }

    bRet = ChkVowel(arr);

    if(bRet == true) printf("Contains Vowel");
    else printf("There is no Vowel");
    return EXIT_SUCCESS;

}
/*
.....................................................................

                                Sample output


Enter string :marvellous
Contains Vowel

Enter string :Demo
Contains Vowel

Enter string :xyz
There is no Vowel

.....................................................................
*/