#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//////////////////////////////////////////////////////// 
//      function name : OnlyUpper 
//      Description : coverts all lower cses to upper case in a string
//      input : string
//      output : void
//      author : Vedant Kalidas Barne
//      Date : 7th Nov 2026
//////////////////////////////////////////////////////// 
void OnlyUpper(char *ch ){
    int ilen = strlen(ch);
    int i = 0 ;
    char ch1 = '\0'; 
    for(i = 0 ; i <= ilen-1; i++){
        for(ch1 = 'a' ;ch1<= 'z'; ch1++ ){
            if (ch[i] == ch1){
                ch[i] = ch1-32; 
            }
        }
    }
    printf("%s", ch);
}
//////////////////////////////////////////////////////// 
//      Entery point 
//////////////////////////////////////////////////////// 

int main(){
    char cValue [30] ;
    int i = 0 ;
    printf("Enter a string : "); 
    if(scanf("%[^\n]s", cValue)!= 1 ){
        fprintf(stderr, "Invalid input"); 
        return EXIT_FAILURE ; 
    }
    for(i = 0  ; i <= strlen(cValue)-1 ; i++){
        if(
            !(cValue[i] >= 'A' && cValue[i] <= 'Z')
            &&
            !(cValue[i] >= 'a' && cValue[i]<= 'z')
            &&
            !(cValue[i] == ' ')
        )
        {
            printf("Enter only string of alphabets ");
            return EXIT_FAILURE ; 
        }
    }
    
    OnlyUpper(cValue); 
    return EXIT_SUCCESS ;

}
//////////////////////////////////////////////////////// 
//
//                  Sample output : 
/*
Enter a string : marvellous infosystems
MARVELLOUS INFOSYSTEMS%   


Enter a string : vedant barne
VEDANT BARNE%                                                                                                                               vedantbarne@Vedants-MacBook-Air-2 Assignment_23 % Vedant Barne


*/
////////////////////////////////////////////////////////