#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : prints pattern 
//  Description     : prints the pattern for i/p 
/*
Enter number of rows : 4
Enter a number of columns : 4
*	*	*	*	
*	@	@	*	
*	@	@	*	
*	*	*	*
*/
//  
//  Input           : int , int 
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 6/11/2026
//
//////////////////////////////////////////////////////////

void pattern (int iRow, int iCol ) {
    int i=0; 
    int j =0 ; 

    for(int i = 1 ; i <= iRow ; i++){
        for(j=1; j<=iCol ;j ++) {
            if (i == 1 || i == iRow){
                printf("*\t") ; 
            }
            else if (j ==1 || j==iCol ){
                printf("*\t") ; 
            }
            else printf("@\t") ; 
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

    printf("Enter number of rows : "); 
    if(scanf("%d", &iValue1)!= 1 ){
        fprintf(stderr, "Invalid input") ; 
        return EXIT_FAILURE ; 

    }
    printf("Enter a number of columns : "); 
    if(scanf("%d", &iValue2)!= 1 ){
        fprintf(stderr, "Invalid input") ; 
        return EXIT_FAILURE ; 

    }

    pattern(iValue1, iValue2) ;  

    return EXIT_SUCCESS ; 

}


////////////////////////////////////////////////////////////////////////////
/*                  Sample o/p

Enter number of rows : 5
Enter a number of columns : 7
*	*	*	*	*	*	*	
*	@	@	@	@	@	*	
*	@	@	@	@	@	*	
*	@	@	@	@	@	*	
*	*	*	*	*	*	*	


Enter number of rows : 9
Enter a number of columns : 9
*	*	*	*	*	*	*	*	*	
*	@	@	@	@	@	@	@	*	
*	@	@	@	@	@	@	@	*	
*	@	@	@	@	@	@	@	*	
*	@	@	@	@	@	@	@	*	
*	@	@	@	@	@	@	@	*	
*	@	@	@	@	@	@	@	*	
*	@	@	@	@	@	@	@	*	
*	*	*	*	*	*	*	*	*
*/
////////////////////////////////////////////////////////////////////////////
