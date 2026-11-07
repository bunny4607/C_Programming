#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//////////////////////////////////////////////////////// 
//      function name : check char
//      Description : checks if a char is there in string both taken from user and prints it
//      input : string, char
//      output : int
//      author : Vedant Kalidas Barne
//      Date : 7th Nov 2026
//////////////////////////////////////////////////////// 
int calChar(char *cValue1, char *cValue2){
    int i = 0 ; 
    int iCount = 0 ; 

    for(i = 0 ; i<= strlen(cValue1); i++){
        if(cValue1[i] == cValue2[0]){
            iCount ++; 
        }
    }
    return iCount ; 
}
/*
.............................................................
                    Entery point
.............................................................
*/
int main(){

    char cValue1[40];
    char cValue2 = '\0'; 
    int iRet = 0 ; 


    printf("Enter a string :"); 
    if(scanf("%39[^\n]s", cValue1)!= 1){
        fprintf(stderr, "INVALID INPUT"); 
        return EXIT_FAILURE ; 
    }
    printf("Enter a char : "); 
    if(scanf(" %c", &cValue2)!= 1){
        fprintf(stderr, "INVALID INPUT "); 
        return EXIT_FAILURE ; 

    }

    iRet = calChar(cValue1, &cValue2);
    
    printf("%d\n", iRet); 

    return EXIT_SUCCESS; 

}
/*
..........................................................................................................................
                        sample outputs
Enter a string :Marvellous Multi OS
Enter a char : M
2%       


Enter a string :Marvellous Multi OS
Enter a char : W
0%  
.............................................................
*/