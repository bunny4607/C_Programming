#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : prints pattern 
//  Description     : prints the pattern for i/p 
/*
enter number of rows : 4
enter number of columns : 4
1	2	3	4	
1	*	*	4	
1	*	*	4	
1	2	3	4	

*/
//  
//  Input           : int 
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 6/11/2026
//
//////////////////////////////////////////////////////////

void pattern(int iRow , int iCol) {
    int i = 0 ;
    int j = 0 ; 

    for(i =1 ; i <= iRow ; i++){
        for(j=1; j<= iCol ; j++){
            if (i ==1 || i == iRow ){
                printf("%d\t", j); 
            }
            else if ( j== 1 || j == iCol){
                printf("%d\t", j) ;
            }
            else printf("*\t"); 
        }
        printf("\n") ; 

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

    printf("enter number of rows : ") ; 
    if(scanf("%d", &iValue1 ) != 1){
        fprintf(stderr, "invalid input "); 
        return EXIT_FAILURE ; 

    }

    printf("enter number of columns : ") ; 
    if(scanf("%d", &iValue2 ) != 1){
        fprintf(stderr, "invalid input "); 
        return EXIT_FAILURE ; 

    }

    pattern(iValue1 , iValue2) ; 
    return EXIT_SUCCESS ; 

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*                                                      Sample o/p




enter number of rows : 4
enter number of columns : 5
1	2	3	4	5	
1	*	*	*	5	
1	*	*	*	5	
1	2	3	4	5	



enter number of rows : 6
enter number of columns : 7
1	2	3	4	5	6	7	
1	*	*	*	*	*	7	
1	*	*	*	*	*	7	
1	*	*	*	*	*	7	
1	*	*	*	*	*	7	
1	2	3	4	5	6	7



*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////