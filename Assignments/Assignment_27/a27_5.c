#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
..........................................................

Function name : reverse string 
Description : Reverses string taken from user 
Input : string 
Output : void 
Author : Vedant Kalidas Barne 
Date : 8/11/2026

..........................................................
*/
void revString (char *cValue){
    char cRev[40]; 
    int i = 0 ; 
    int j = 0 ; 
    for(i = strlen(cValue) - 1 ; i>= 0 ; i--){
        cRev[j] = cValue[i];
        j++; 
    }
    printf("%39s",cRev );
}
/*
..........................................................

                    Entery point 

..........................................................
*/

int main(){
    char cValue[40]; 

    printf("Enter a string : "); 
    if(scanf("%[^\n]s", cValue )!= 1){
        fprintf(stderr, "Inavlid input "); 
        return EXIT_FAILURE ; 

    }

    revString(cValue);
    return EXIT_SUCCESS ; 

}
/*
..........................................................


                Sample Output 

Enter a string : marvellous 
suollevram%  
                          
                          

Enter a string : vedant
tnadev%    


..........................................................
*/