#include<stdio.h>
#include<stdlib.h>
/*
.....................................................................

Funciton name : displays characters from entered char  
Description : displays characters starting from entered char
input : char 
output : void 
Author : Vedant Kalidas Barne 
Date : 8/11/2026

.....................................................................
*/
void Display(char *cValue){

    char ch = '\0'; 
    if(cValue[0] >= 'A' && cValue[0]<= 'Z'){
        for(ch = cValue[0]; ch <= 'Z'; ch++) {
            printf(" %c", ch);
        }
    }
    else if(cValue[0] >= 'a' && cValue[0]<= 'z'){
        for(ch = cValue[0]; ch <= 'z'; ch++) {
            printf(" %c", ch);
        }
    }
    else {
        ch = cValue[0]; 
        printf("invalid" );

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

    Display(&cValue); 
    return EXIT_SUCCESS ;

}
/*
.....................................................................

                                Sample output 


Enter a char :A
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z%
 
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter a char :l
 l m n o p q r s t u v w x y z%
 
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter a char :Q
 Q R S T U V W X Y Z%  
 
 
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter a char :m
 m n o p q r s t u v w x y z%  
 
vedantbarne@Vedants-MacBook-Air-2 Assignment_26 % ./myexe
Enter a char :8
invalid% 

.....................................................................
*/