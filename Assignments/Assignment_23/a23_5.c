#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//////////////////////////////////////////////////////// 
//      function name : count spaces
//      Description : displays number of spaces in a string taken from user  
//      input : string
//      output : int
//      author : Vedant Kalidas Barne
//      Date : 7th Nov 2026
//////////////////////////////////////////////////////// 
int CountSpaces(char *ch){
    int iCount = 0 ; 
    int i = 0 ;

    for(i = 0 ; i <= strlen(ch); i++){
        if (ch [i] == ' '){
            iCount ++;
        }
    }
    return iCount; 
}
//////////////////////////////////////////////////////// 
//      Entery point 
//////////////////////////////////////////////////////// 

int main(){

    char cValue[30]; 
    int iRet = 0 ;

    printf("Enter a string : ");

    if(scanf("%[^\n]s", cValue )!= 1){
        fprintf(stderr,"Invalid input "); 
        return EXIT_FAILURE ; 

    }

    iRet = CountSpaces(cValue) ; 
    printf("number of spaces is %d\n", iRet ); 

    return EXIT_SUCCESS ;

}
/*
......................................................................
                        SAMPLE OUTPUTS 
......................................................................
Enter a string : marvellous
number of spaces is 0      



Enter a string : marverllous Infosystems
number of spaces is 1 
        
.......................................................................                                                                                                             
*/