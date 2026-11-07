#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
.....................................................................

Function name : check digit 
Descriptiom : checks if the input taken from user is a digit 
input : char 
output : bool 
author name : Vedant Kalidas Barne 
Date : 8/11/2026

.....................................................................
*/
bool checkDigit(char *cValue ) {
    bool bret = false ; 
    if(cValue[0] >= '1' && cValue[0]<= '9') bret = true ; 

    return bret ; 
}
/*
.....................................................................


                Entery point 


.....................................................................
*/
int main(){
    char cValue = '\0'; 
    bool bRet = false ;

    printf("Enter a digit  :") ;
    if(scanf(" %c", &cValue)!=1){
        fprintf(stderr, "invalid input "); 
        return EXIT_FAILURE ; 

    }

    bRet = checkDigit(&cValue); 

    if(bRet == true ) printf("TRUE\n"); 
    else printf("FALSE\n"); 
    return EXIT_SUCCESS ;
     
}

/*
.....................................................................


                Sample output 

Enter a digit  :9
TRUE


vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a digit  :4
TRUE


vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a digit  :a
FALSE


vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a digit  :k
FALSE


vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a digit  :&
FALSE


.....................................................................
*/