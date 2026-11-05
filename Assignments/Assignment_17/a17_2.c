#include<stdio.h>
#include<stdlib.h>




// void pattern(int iRow , int iCol ) {
//     int i = 0 ; 
//     int j = 0 ; 

//     for (i = 1 ; i <= iRow ; i++) {
//         for ( j = 1 ; j <= iCol  ; j++) {
//             if (i%2 != 0) {
//                 if(j%2 == 0 ){
//                     printf("%d\t", j);
//                 }
//             }
//             else if(i%2 ==0 ) {
//                 if (j%2 != 0 ){
//                     printf("%d\t", j) ;
//                 }
//             }
//         }
//         printf("\n") ; 

//     }
// }


//////////////////////////////////////////////////////////
//
//  Funciton name   : prints pattern 
//  Description     : prints the pattern blwo for i/p = 4,5
//                          Enter number of rows :  4
//                          Enter number of columns :4
//                              2	4	6	8	
//                              1	3	5	7	
//                              2	4	6	8	
//                              1	3	5	7
//  
//  Input           : int , int  
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 6/11/2026
//
//////////////////////////////////////////////////////////

void pattern(int iRow , int iCol ) {

    int i = 0 ; 
    int j = 0 ; 

    for (i = 1 ; i<= iRow ; i++) {
        for(j = 1 ; j <= iCol ; j++) {
            if (i %2 != 0 ) {
                printf("%d\t", 2*j) ;
            }
            else if(i %2 == 0) {
                printf("%d\t", (2*j -1 )) ; 
            }
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

    printf("Enter number of rows :  ") ; 
    if (scanf("%d", &iValue1)!= 1) {
        fprintf(stderr, "invlaid input") ; 
        return EXIT_FAILURE; 

    }

    printf("Enter number of columns :") ; 
    if (scanf("%d", &iValue2 )!= 1) {
        fprintf(stderr, "invalid input ") ; 
        return EXIT_FAILURE ;
    }

    pattern (iValue1 , iValue2 ) ; 

    return EXIT_SUCCESS ; 

}


////////////////////////////////////////////////////////////////////////
//                                  Sample o/p
//
//
//
//
//                          Enter number of rows :  4
//                          Enter number of columns :4
//                              2	4	6	8	
//                              1	3	5	7	
//                              2	4	6	8	
//                              1	3	5	7
//
//                          Enter number of rows :  6
//                          Enter number of columns :7
//                              2	4	6	8	10	12	14	
//                              1	3	5	7	9	11	13	
//                              2	4	6	8	10	12	14	
//                              1	3	5	7	9	11	13	
//                              2	4	6	8	10	12	14	
//                              1	3	5	7	9	11	13
/////////////////////////////////////////////////////////////////////////