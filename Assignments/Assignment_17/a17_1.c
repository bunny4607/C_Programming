#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : prints pattern 
//  Description     : prints the pattern blwo for i/p = 4,5
//                      Enter number of rows : 4
//                      Enter number of columns  :4
//                          1	2	3	4	
//                          5	6	7	8	
//                          9	1	2	3	    
//                          4	5	6	7
//  
//  Input           : int , int  
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 6/11/2026
//
//////////////////////////////////////////////////////////
void pattern (int iRow , int iCol ){
    int i = 0 ; 
    int j = 0; 
    int iCount = 1 ; 

    for (i = 1 ; i<= iRow ; i++) {
        for(j = 1 ; j<= iCol ; j++) {
            if (iCount == 10) {
                iCount = 1 ; 
            }
            printf("%d\t", iCount ); 
            iCount ++ ; 
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
    int iValue2  = 0 ; 

    printf("Enter number of rows : ") ; 
    if (scanf("%d", &iValue1)!=1) {
        fprintf(stderr, "invalid input ");
        return EXIT_FAILURE ; 

    }

    printf("Enter number of columns  :") ;
    if (scanf("%d", &iValue2 )!=1 )  {
        fprintf(stderr, "invalid input ") ; 
        return EXIT_FAILURE ; 

    }

    pattern (iValue1 , iValue2) ;

    return EXIT_SUCCESS ; 

} 