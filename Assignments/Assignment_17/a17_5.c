#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : prints pattern 
//  Description     : prints the pattern blwo for i/p = 4,5
//              Enter number of rows : 4
//              Enter number of columns : 4
//                  1	2	3	4	
//                  2	3	4	5	
//                  3	4	5	6	
//                  4	5	6	7
//
//  
//  Input           : int , int  
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 6/11/2026
//
//////////////////////////////////////////////////////////
void pattern(int iRow, int iCol) {
    if (iRow <0 ) iRow = - iRow ;
    if (iCol <0 ) iCol = - iCol ;  

    int i =0 ; 
    int j= 0;
    int k = 0;
    for(i= 1 ; i<= iRow ; i++){
        k = i ; 
        for(j =1 ; j<=iCol ; j++) {

            printf("%d\t", k) ; 
            k++;

        }
        printf("\n") ; 

    }

}
int main(){
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    printf("Enter number of rows : ") ; 
    if (scanf("%d", &iValue1)!= 1){
        fprintf(stderr, "invalid iput"); 
        return EXIT_FAILURE; 

    }
    printf("Enter number of columns : ") ; 
    if (scanf("%d", &iValue2)!= 1){
        fprintf(stderr, "invalid iput"); 
        return EXIT_FAILURE; 
        
    }

    pattern (iValue1, iValue2 ); 

    return EXIT_SUCCESS; 

}

////////////////////////////////////////////////////////////////////////
//                      Sample o/p
/*
Enter number of rows : 4
Enter number of columns : 7
1	2	3	4	5	6	7	
2	3	4	5	6	7	8	
3	4	5	6	7	8	9	
4	5	6	7	8	9	10

Enter number of rows : 6
Enter number of columns : 7
1	2	3	4	5	6	7	
2	3	4	5	6	7	8	
3	4	5	6	7	8	9	
4	5	6	7	8	9	10	
5	6	7	8	9	10	11	
6	7	8	9	10	11	12
*/
/////////////////////////////////////////////////////////////////////////