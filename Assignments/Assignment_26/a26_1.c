#include<stdio.h>
#include<stdlib.h>
/*
.....................................................................

Funciton name : display ascii value 
Description : displays ascii value of entered char 
input : char 
output : void 
Author : Vedant Kalidas Barne 
Date : 8/11/2026

.....................................................................
*/
void displayASCII(char *cValue){

    printf("ASCII value is %d", *cValue); 
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

    displayASCII(&cValue); 
    return EXIT_SUCCESS ;

}
/*
.....................................................................

                                Sample output 


Enter a char :a
ASCII value is 97%   

vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter a char :A
ASCII value is 65% 

vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter a char :k
ASCII value is 107%

.....................................................................
*/