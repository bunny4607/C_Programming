#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
............................................................................................................

Function name : checks for small alphabet 
Description : checks if entered character is small alphabet prints true if it is false if not 
Input : char 
Output : bool 
Author : Vedant Kalidas Barne 
Date : 8 /11 /2026

............................................................................................................
*/
bool CheckSmall(char *cValue) {
    bool bret =false ; 
    if (cValue[0] >= 'a' && cValue[0]<='z')
    {
        bret = true ;
    }
    return bret ; 
}
/*
............................................................................................................

                            Entery Point 

............................................................................................................
*/
int main(){
    char cValue = '\0'; 
    bool bRet = 0 ; 

    

    printf("Enter a char: "); 
    if(scanf(" %c", &cValue)!= 1 ){
        fprintf(stderr,"invalid input "); 
        return EXIT_FAILURE ; 

    }
    bRet = CheckSmall(&cValue); 
    if(bRet == true ) printf("TRUE") ; 
    else if (bRet == false )printf("FALSE"); 


    return EXIT_SUCCESS ;
}
/*
............................................................................................................

                            Sample Output 


vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe             
Enter a char: a
TRUE%  

vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a char: A
FALSE%    

vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a char: 4
FALSE%   

vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a char: %
FALSE%  

............................................................................................................
*/