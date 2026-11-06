#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : prints pattern 
//  Description     : prints the pattern  for i/p 
/*

Enter number of rows : 5
Enter number of columns : 5
1	2	3	4	5	
1	 	 	4	5	
1	 	3	 	5	
1	2	 	 	5	
1	2	3	4	5

*/
//  
//  Input           : int , int 
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 6/11/2026
//
//////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol) {
    int i = 0 ; 
    int j = 0 ; 
    for (i = 1 ; i <= iRow ; i++){
        for(j = 1; j<= iCol ; j++){
            if (i == 1 || i ==iRow) printf("%d\t", j); 
            else if ((i+j) == (iRow + 1)) printf("%d\t", j); 
            else if (j ==1 || j== iCol) printf("%d\t", j) ;
            else printf(" \t"); 
        }
        printf("\n");
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

    printf("Enter number of rows : "); 
    if (scanf("%d", &iValue1)!= 1) {
        fprintf(stderr, "invalid input") ;
        return EXIT_FAILURE ; 
    }

    printf("Enter number of columns : "); 
    if (scanf("%d", &iValue2)!= 1) {
        fprintf(stderr, "invalid input") ;
        return EXIT_FAILURE ; 
    }

    Pattern(iValue1, iValue2 ) ; 
    return EXIT_SUCCESS ; 

}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
/*                                  Sample o/p


Enter number of rows : 6
Enter number of columns : 6
1	2	3	4	5	6	
1	 	 	 	5	6	
1	 	 	4	 	6	
1	 	3	 	 	6	
1	2	 	 	 	6	
1	2	3	4	5	6	


Enter number of rows : 4
Enter number of columns : 6
1	2	3	4	5	6	
1	 	3	 	 	6	
1	2	 	 	 	6	
1	2	3	4	5	6	


Enter number of rows : 7
Enter number of columns : 7
1	2	3	4	5	6	7	
1	 	 	 	 	6	7	
1	 	 	 	5	 	7	
1	 	 	4	 	 	7	
1	 	3	 	 	 	7	
1	2	 	 	 	 	7	
1	2	3	4	5	6	7


*/
/////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////