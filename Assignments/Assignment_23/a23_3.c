#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//////////////////////////////////////////////////////// 
//      function name : changCase  
//      Description : flips case
//      input : string
//      output : void
//      author : Vedant Kalidas Barne
//      Date : 7th Nov 2026
//////////////////////////////////////////////////////// 
void changeCase(char *ch){
    int i = 0 ; 
    for(i = 0 ; i <= strlen(ch) - 1 ; i++){
        if(ch[i] >= 'A' && ch [i] <= 'Z'){
            ch[i] = ch[i] + 32 ; 
        }
        
        else if(ch[i] >= 'a' && ch [i] <= 'z'){
            ch[i] = ch[i] - 32 ; 
        } 
    }
    printf("%29s\n", ch); 
}
//////////////////////////////////////////////////////// 
//      Entery point 
//////////////////////////////////////////////////////// 

int main(){
    char cValue[30];
    int i = 0 ; 

    printf("Enter a string : "); 
    if(scanf("%29[^\n]s", cValue )!= 1){
        printf("Invalid input "); 
        return EXIT_FAILURE ; 

    }
    for(i = 0 ; i<= strlen(cValue)-1 ; i++){
        if(
            !(cValue [i] >= 'A' && cValue[i]<= 'Z')
            &&
            !(cValue [i] >= 'a' && cValue[i]<= 'z')
            &&
            !(cValue[i] == ' ')
        ){
            printf("invalid input ");
            return EXIT_FAILURE;

        }
    }
    changeCase(cValue); 
    return EXIT_SUCCESS ; 
}
//////////////////////////////////////////////////////// 
//
//                  Sample output : 
/*
Enter a string :  Marvellous Infosystems OS    
    mARVELLOUS iNFOSYSTEMS os



Enter a string : VEdant BArne
                 veDANT baRNE


                 
Enter a string : VEdant Barne04
invalid input %                                                                                                                                vedantbarne@Vedants-MacBook-Air-2 Assignment_23 % Vedant Barne


*/
////////////////////////////////////////////////////////