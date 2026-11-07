#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
..........................................................................................................................

Function Name : check Index 
Description : returns last index of particular char from string (ip taken from user)
input : char , char 
output : int 
Author : Vedant Kalidas Barne
Date : 8/11/2026

..........................................................................................................................

*/

int checkIndex(char *cValue1, char *cValue2){
    int i = 0 ; 
    int j = 0 ;

    for(i = 0 ; i < strlen(cValue1); i++){
        if(cValue1[i] == cValue2[0]){
            j = i ;
            
             
        }
    }
    return j ;
}
/*
..........................................................................................................................


                        ENTRY POINT 


..........................................................................................................................

*/
int main(){

    char cValue1 [40] ; 
    char cValue2 = '\0'; 
    int iRet = 0 ; 


    printf("Enter a string : \n") ;
    if(scanf("%39[^\n]s", cValue1)!=1){
        fprintf(stderr, "Invalid input"); 
        return EXIT_FAILURE ; 

    }
    printf("Enter a char : \n") ;
    if(scanf(" %c", &cValue2)!=1){
        fprintf(stderr, "Invalid input"); 
        return EXIT_FAILURE ; 
        
    }
    
    iRet = checkIndex(cValue1, &cValue2);
    printf("%d", iRet ); 
    return EXIT_SUCCESS ; 

}
/*
..........................................................................................................................
                                    SAMPLE OUTPUT 


Enter a string : 
marvellous
Enter a char : 
m
0% 

vedantbarne@Vedants-MacBook-Air-2 Assignment_24 % ./myexe
Enter a string : 
Marvellous
Enter a char : 
m
0% 


vedantbarne@Vedants-MacBook-Air-2 Assignment_24 % ./myexe
Enter a string : 
Vedant
Enter a char : 
d
2%  


..........................................................................................................................
*/