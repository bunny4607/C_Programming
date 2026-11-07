#include<stdio.h>
#include<stdlib.h>
/*
.....................................................................

Funciton name : changes cases of char 
Description : changes cases of enterd char 
input : char 
output : void 
Author : Vedant Kalidas Barne 
Date : 8/11/2026

.....................................................................
*/
void changeCase(char *cValue){

    char ch = '\0'; 
    if(cValue[0] >= 'A' && cValue[0]<= 'Z'){
        ch = cValue[0]+32 ;
        printf("%c", ch ); 
    }
    else if (cValue[0] >= 'a' && cValue[0]<= 'z'){
        ch = cValue[0] - 32 ; 
        printf("%c", ch );
    }
    else {
        ch = cValue[0]; 
        printf("%c", ch );

    }
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

    changeCase(&cValue); 
    return EXIT_SUCCESS ;

}
/*
.....................................................................

                                Sample output 


Enter a char :a
A

vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter a char :A
a

vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter a char :1
1

vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter a char :%
% 

.....................................................................
*/