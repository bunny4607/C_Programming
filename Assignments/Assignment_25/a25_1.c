#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
............................................................................................................

Function name : check alphabet 
Description : checks if entered character is an alphabet prints true if it is false if not 
Input : char 
Output : void 
Author : Vedant Kalidas Barne 
Date : 8 /11 /2026

............................................................................................................
*/
bool Check(char *cValue) {
    bool bret =false ; 
    if (
        (cValue[0] >= 'A' && cValue[0]<='Z')
        ||
        (cValue[0] >= 'a' && cValue[0]<='z')
    )
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
    bRet = Check(&cValue); 
    if(bRet == true ) printf("TRUE") ; 
    else if (bRet == false )printf("FALSE"); 


    return EXIT_SUCCESS ;
}
/*
............................................................................................................

                            Sample Output 


Enter a char: f
TRUE% 

vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a char: F
TRUE%   

vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a char: Z
TRUE%

vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a char: &
FALSE%  

vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a char: 4
FALSE%  

............................................................................................................
*/