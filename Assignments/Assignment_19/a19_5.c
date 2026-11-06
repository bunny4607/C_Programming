#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : prints pattern 
//  Description     : prints the pattern  for i/p 
/*


Enter number of rows : 4
Enter number of columns  : 4
1	2	3	4	
 	2	3	4	
 	 	3	4	
 	 	 	4
*/
//  
//  Input           : int , int 
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 6/11/2026
//
//////////////////////////////////////////////////////////

void pattern (int iRow , int iCol ){
    int i = 0 ;
    int j = 0 ; 

    for(i = 1 ; i <= iRow ; i++){
        for(j = 1; j <= iCol ; j++){
            if (i > j ) printf(" \t"); 
            else printf("%d\t", j); 
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
    if (scanf("%d", &iValue1)!= 1) {
        fprintf(stderr, "Invalid input"); 
        return EXIT_FAILURE ; 

    }
    printf("Enter number of columns  : ");
    if (scanf("%d", &iValue2)!= 1) {
        fprintf(stderr, "Invalid input"); 
        return EXIT_FAILURE ; 
        
    }

    pattern (iValue1, iValue2 ); 

    return EXIT_SUCCESS ;

}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
/*                                  Sample o/p




Enter number of rows : 4
Enter number of columns  : 4
1	2	3	4	
 	2	3	4	
 	 	3	4	
 	 	 	4	
vedantbarne@Vedants-MacBook-Air-2 Assignment19 % ./myexe
Enter number of rows : 6
Enter number of columns  : 7
1	2	3	4	5	6	7	
 	2	3	4	5	6	7	
 	 	3	4	5	6	7	
 	 	 	4	5	6	7	
 	 	 	 	5	6	7	
 	 	 	 	 	6	7	
vedantbarne@Vedants-MacBook-Air-2 Assignment19 % ./myexe
Enter number of rows : 3
Enter number of columns  : 6
1	2	3	4	5	6	
 	2	3	4	5	6	
 	 	3	4	5	6



*/
/////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////