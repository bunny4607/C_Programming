
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//////////////////////////////////////////////////////// 
//      function name : OnlyLower 
//      Description : coverts all upper cses to lower case in a string
//      input : string
//      output : void
//      author : Vedant Kalidas Barne
//      Date : 7th Nov 2026
//////////////////////////////////////////////////////// 

void OnlyLower(char *ch){
    int i = 0 ; 
    char ch1 ='\0' ; 
    int ilen = strlen(ch);
    
    for(i = 0 ; i <= ilen - 1 ; i++){
         
        for(ch1 = 'A';ch1 <= 'Z'; ch1++){
            if (ch[i] == ch1){
                ch[i] = ch1+32 ; 
            }
        }
    }
    printf("%s\n", ch) ; 
}
//////////////////////////////////////////////////////// 
//      Entery point 
//////////////////////////////////////////////////////// 

int main(){

    char cValue[30];
    int i = 0 ;

    printf("Enter a string : "); 
    if(scanf("%29[^'\n']s", cValue)!= 1){
        fprintf(stderr,"Invalid input ") ;
        return EXIT_FAILURE; 
    }

    for(i =0 ; i <= strlen(cValue)-1; i++ ){
        if (
            !(cValue[i] >= 'A' && cValue[i] <= 'Z') &&
            !(cValue[i] >= 'a' && cValue[i] <= 'z') &&
            !(cValue[i] == ' ')
        ){
        printf("Enter only alphabets "); 
        return EXIT_FAILURE;
        } 
    }
    
    OnlyLower(cValue); 

    return EXIT_SUCCESS ; 

}
//////////////////////////////////////////////////////// 
//
//                  Sample output : 
/*
Enter a string : Marvellous Infosystems
marvellous infosystems
vedantbarne@Vedants-MacBook-Air-2 Assignment_23 % ./myexe
Enter a string : Vedant Barne
vedant barne
vedantbarne@Vedants-MacBook-Air-2 Assignment_23 % ./myexe
Enter a string : VEDant BARne
vedant barne
*/
////////////////////////////////////////////////////////