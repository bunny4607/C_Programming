#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
//////////////////////////////////////////////////////// 
//      function name : check char
//      Description : checks if a char is there in string both taken from user 
//      input : string, char
//      output : bool
//      author : Vedant Kalidas Barne
//      Date : 7th Nov 2026
//////////////////////////////////////////////////////// 
bool check(char *cValue1, char *cValue2) {
    int i = 0 ; 
    int iCount = 0 ; 
    for( i = 0 ; i < strlen(cValue1); i++){
        if (cValue1[i] == cValue2[0]){
            iCount++; 
        }
    }
    if(iCount > 0 ) return true ; 
    else return false; 
     
}
//////////////////////////////////////////////////////// 
//      Entery point 
//////////////////////////////////////////////////////// 
int main(){
    char cValue1[40]; 
    char cValue2; 
    bool iRet = false ; 


    printf("Enter a string : "); 
    if(scanf("%39[^\n]", cValue1 )!= 1){
        fprintf(stderr, "invalid input"); 
        return EXIT_FAILURE ; 

    }
    printf("Enter character to search ") ; 
    if(scanf(" %c", &cValue2)!=1){
        fprintf(stderr, "Invalid input \n"); 
        return EXIT_FAILURE ; 

    }


    iRet = check(cValue1, &cValue2) ; 
    if (iRet == true ) printf("TRUE "); 
    else if(iRet == false) printf("FALSE"); 

    
    return EXIT_SUCCESS ;

}
/*
......................................................................
                        SAMPLE OUTPUTS 
......................................................................
Enter a string : Marvellous Multi OS
Enter character to search M
TRUE %                   


Enter a string : Marvellous Multi OS
Enter character to search 2
FALSE%         


Enter a string : Vedant
Enter character to search t
TRUE %
        
.......................................................................                                                                                                             
*/