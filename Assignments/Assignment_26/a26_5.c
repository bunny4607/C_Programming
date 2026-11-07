#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
.....................................................................

Funciton name : decimal 
Description : gives decimal , octal and hexadeciaml valus of char 
input : char 
output : void 
Author : Vedant Kalidas Barne 
Date : 8/11/2026

.....................................................................
*/
void Display(char *cValue){
    if(cValue[0] >= 'A' && cValue [0]<= 'Z'){
        printf("decimal :%d\n", *cValue) ; 
        printf("octal :%o\n", *cValue) ;
        printf("hexadecimal :%x\n", *cValue) ;
    }
    else if (cValue[0] >= 'a' && cValue[0] <= 'z'){
        printf("decimal :%d\n", *cValue) ; 
        printf("octal :%o\n", *cValue) ;
        printf("hexadeciaml :%x\n", *cValue) ;
    }
    else printf("invalid "); 
    
}
/*
.....................................................................


                            Entry point 


.....................................................................
*/
int main(){

    char cValue = '\0';


    printf("Enter a char :"); 
    if(scanf(" %c", &cValue) != 1){
        fprintf(stderr, "Invalid input"); 
        return EXIT_FAILURE ; 
    }



    Display(&cValue); 

    return EXIT_SUCCESS ;

}
/*
.....................................................................

                                Sample output 


Enter a char :a
decimal :97
octal :141
hexadeciaml :61


vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter a char :A
decimal :65
octal :101
hexadecimal :41


vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter a char :k
decimal :107
octal :153
hexadeciaml :6b

.....................................................................
*/