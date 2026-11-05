#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : prints pattern 
//  Description     : prints the pattern blwo for i/p = 4,4 
//                      A	B	C	D	
//                      A	B	C	D	
//                      A	B	C	D	
//                      A	B	C	D
//  
//  Input           : int , int  
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 5/11/2026
//
//////////////////////////////////////////////////////////
void Pattern(int iRows, int iCol) {
    int i = 0 ; 
    int j = 0 ; 
    char ch = '\0' ; 

    for (i = 1 ; i <= iRows ; i++) {
        ch = 'A'; 
        for (j = 1; j <= iCol ;j++) {
            printf("%c\t", ch ) ; 
            ch++;
        }
        
        printf("\n"); 
    }
}
////////////////////////////////////////////////////////////////////////////
//
//              Entery point 
//
////////////////////////////////////////////////////////////////////////////
int main(){
    int iValue1 = 0 ; 
    int iValue2 = 0 ; 

    printf("Enter number of rows : " ) ; 
    if(scanf("%d", &iValue1 ) != 1){
        fprintf(stderr, "Unable to proceed as valid input "); 
        return EXIT_FAILURE; 
    }

    printf("Enter number of columns  :") ; 
    if (scanf("%d", &iValue2) != 1){
        fprintf(stderr, "Unable to proceed as valid input ") ; 
        return EXIT_FAILURE ; 

    }
    
    Pattern(iValue1, iValue2) ; 



    return EXIT_SUCCESS; 

}