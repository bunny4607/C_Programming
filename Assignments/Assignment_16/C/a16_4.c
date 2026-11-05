#include<stdio.h> 
#include<stdlib.h>


//////////////////////////////////////////////////////////
//
//  Funciton name   : prints pattern 
//  Description     : prints the pattern blwo for i/p = 4,5
//                      4	4	4	4	4	
//                      3	3	3	3	3	
//                      2	2	2	2	2	
//                      1	1	1	1	1
//  
//  Input           : int , int  
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 5/11/2026
//
//////////////////////////////////////////////////////////


void Pattern(int iRow, int iCol ) {
    int i = 0 ; 
    int j = 0 ; 

    int iNo = 0 ; 
    iNo = iRow ; 
    for ( i =1 ; i<= iRow ; i++) {
        for (j =1 ; j<=iCol ; j++) {
            printf("%d\t", iNo ) ; 
        }
        iNo -- ; 

        printf("\n") ; 

    }
     
}

////////////////////////////////////////////////////////////////////////////
//
//              Entery point 
//
////////////////////////////////////////////////////////////////////////////
int main() {

    int iValue1 = 0;
    int iValue2 = 0 ; 

    printf("Enter number of rows :") ; 
    if(scanf("%d", &iValue1 ) != 1 ) {
        fprintf(stderr, "invalid input ") ; 
        return EXIT_FAILURE ; 

    }
    printf("Enter number of columns  : ") ; 
    if(scanf("%d", &iValue2 ) != 1 ) {
        fprintf(stderr, "invlaid input" );
        return EXIT_FAILURE ; 

    }

    Pattern (iValue1 , iValue2 ); 

    return EXIT_SUCCESS ; 

}