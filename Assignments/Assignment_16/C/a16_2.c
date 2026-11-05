#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : prints pattern 
//  Description     : prints the pattern blwo for i/p = 4,4 
/*
                     ABCD
                     abcd
                    ABCD
                    abcd
*/ 
//  Input           : int , int  
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 5/11/2026
//
//////////////////////////////////////////////////////////
void Pattern (int iRow , int iCol ) {
    int i = 0 ; 
    int j = 0 ;
    char ch = '\0'; 
    for (i = 1 ; i<= iRow ; i++) {
        if (i %2 == 0 ) {
            ch = 'a';

        }
        else {
            ch = 'A' ; 
        }
        for (j = 1 ; j <= iCol; j++) {
            printf("%c",ch  );
            ch ++ ; 
        }
        printf("\n") ; 

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
    printf("Enter number of rows : \n") ; 
    if (scanf("%d ", &iValue1 )!= 1){
        fprintf(stderr, "Unable to proceed as valid input ") ; 

        return EXIT_FAILURE ; 
    }
    if (scanf("%d", &iValue2 )!= 1){
        fprintf(stderr, "Unable to proceed as valid input "); 

        return EXIT_FAILURE ; 
    }
    Pattern (iValue1, iValue2 ) ; 
    
    return EXIT_SUCCESS ; 

}