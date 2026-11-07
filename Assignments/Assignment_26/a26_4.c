#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
.....................................................................

Funciton name : special char check
Description : true if special char else false
input : char 
output : bool 
Author : Vedant Kalidas Barne 
Date : 8/11/2026

.....................................................................
*/
bool checkSpChar(char *cValue){
    bool bret = false ;
    char ch = '\0'; 
    if(cValue[0] >= 'A' && cValue[0]<= 'Z'){
        bret = false; 
    }
    else if(cValue[0] >= 'a' && cValue[0]<= 'z'){
        bret = false;
    }
    else if(cValue[0] >= '1' && cValue[0]<= '9'){
        bret = false;
    }
    else bret = true ; 

    return bret ; 
    
}
/*
.....................................................................


                            Entry point 


.....................................................................
*/
int main(){

    char cValue = '\0';
    bool bRet = false ; 


    printf("Enter a char :"); 
    if(scanf(" %c", &cValue) != 1){
        fprintf(stderr, "Invalid input"); 
        return EXIT_FAILURE ; 
    }

    bRet = checkSpChar(&cValue); 

    if(bRet == true ) printf("TRUE"); 
    else printf("FALSE");
    return EXIT_SUCCESS ;

}
/*
.....................................................................

                                Sample output 


Enter a char :A
FALSE%    

vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter a char :-
TRUE%  

vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter a char :+
TRUE%

.....................................................................
*/