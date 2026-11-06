#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : prints pattern 
//  Description     : prints the pattern for i/p 
/*
Enter a number : 4
$	*	*	*	
*	$	*	*	
*	*	$	*	
*	*	*	$	
*/
//  
//  Input           : int 
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 6/11/2026
//
//////////////////////////////////////////////////////////

void pattern(int iRow) {
    int i = 0 ; 
    int j = 0 ; 

    for(i = 1; i<= iRow; i++) {
        for(j= 1 ; j<=iRow ; j++){
            if (i == j ) 
            {
                printf("$\t") ; 

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
    int iValue = 0 ; 

    printf("Enter a number : ") ; 
    if(scanf("%d", &iValue)!= 1){
        fprintf(stderr,"invalid input ") ; 
        return EXIT_FAILURE ; 

    }

    pattern (iValue) ; 

    return EXIT_SUCCESS ;

}

////////////////////////////////////////////////////////////////////////////
/*                  Sample o/p
Enter a number : 5
$	*	*	*	*	
*	$	*	*	*	
*	*	$	*	*	
*	*	*	$	*	
*	*	*	*	$	


Enter a number : 9
$	*	*	*	*	*	*	*	*	
*	$	*	*	*	*	*	*	*	
*	*	$	*	*	*	*	*	*	
*	*	*	$	*	*	*	*	*	
*	*	*	*	$	*	*	*	*	
*	*	*	*	*	$	*	*	*	
*	*	*	*	*	*	$	*	*	
*	*	*	*	*	*	*	$	*	
*	*	*	*	*	*	*	*	$


*/
////////////////////////////////////////////////////////////////////////////

