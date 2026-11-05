#include<stdio.h>
#include<stdlib.h> 
//////////////////////////////////////////////////////////
//
//  Funciton name   : prints pattern 
//  Description     : prints the pattern blwo for i/p = 4,4 
//                      A A A A 
//                      B B B B 
//                      C C C C 
//                      D D D D 
//  
//  Input           : int , int  
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 5/11/2026
//
//////////////////////////////////////////////////////////
void Pattern (int iRows , int iCol ) {
    int i = 0 ; 
    int j = 0 ; 
    char ch = '\0' ; 
    ch = 'A' ; 
    for ( i = 1 ; i<= iRows ; i++) {
        
        for(j =1 ; j<= iCol ; j++) {
            printf("%c ",ch  ) ; 

        }
        
        printf("\n") ; 
        ch++ ; 

    }
}
////////////////////////////////////////////////////////////////////////////
//
//              Entery point 
//
////////////////////////////////////////////////////////////////////////////
int main() {

    int iValue1 = 0 ; 
    int iValue2 = 0 ; 

    printf("Enter number of rows : ") ; 
    if(scanf("%d", &iValue1 ) != 1) {
        fprintf(stderr, "Invalid input ") ; 
        return EXIT_FAILURE ; 

    }

    printf("Enter second number. : ") ; 
    if (scanf("%d", &iValue2  ) != 1 ) {
        fprintf(stderr, "Invalid input") ; 
        return EXIT_FAILURE ; 

    }

    Pattern(iValue1 , iValue2) ; 

    return EXIT_SUCCESS; 
}