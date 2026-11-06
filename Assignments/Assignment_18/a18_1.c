#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : prints pattern 
//  Description     : prints the pattern blwo for i/p 
/*
Enter the number of rows : 4
*	#	#	#	
*	*	#	#	
*	*	*	#	
*	*	*	*
*/
//  
//  Input           : int 
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 6/11/2026
//
//////////////////////////////////////////////////////////

void pattern (int iRow  ) {
    int i = 0 ;
    int j = 0 ;

    for(i =1 ; i<=iRow ; i++ ){
        for(j =1 ; j<=i ; j++ ){
            printf("*\t"); 
        }
        for(j = iRow -i ; j>=1; j--){
            printf("#\t") ; 
        }
        printf("\n")  ; 

    }
}

////////////////////////////////////////////////////////////////////////////
//
//              Entery point 
//
////////////////////////////////////////////////////////////////////////////


int main(){
    int iValue1 = 0 ; 
 

    printf("Enter the number of rows : "); 
    if(scanf("%d", &iValue1)!= 1){
        fprintf(stderr, "invalid input "); 
        return EXIT_FAILURE  ; 

    
    }
    pattern (iValue1); 

    return EXIT_SUCCESS ;

}



////////////////////////////////////////////////////////////////////////////
/*                  Sample o/p


Enter the number of rows : 6
*	#	#	#	#	#	
*	*	#	#	#	#	
*	*	*	#	#	#	
*	*	*	*	#	#	
*	*	*	*	*	#	
*	*	*	*	*	*


Enter the number of rows : 3
*	#	#	
*	*	#	
*	*	*


*/
////////////////////////////////////////////////////////////////////////////



