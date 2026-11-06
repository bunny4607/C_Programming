#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////
/*
            Function name   : pattern 
            Description     : prints pattern taking input from user 
            Enter a number: 8
            2	4	6	8	10	12	14	16
        
            input           : int 
            outout          : void
            Author          : Vedant Kalidas Barne
            Date            : 6/11/2026
*/
//////////////////////////////////////////////////////////////////

void pattern(int iNo) {
    int i = 0 ; 
    for( i = 1 ;i <= iNo; i++){
        printf("%d\t", 2*i);
    }
}
////////////////////////////////////////////////////////////////// 
//
//                  Entery Point 
// 
////////////////////////////////////////////////////////////////// 

int main(){
    int iValue = 0 ; 
    
    printf("Enter a number: "); 

    if(scanf("%d", &iValue )!=1){
        fprintf(stderr, "invalid input") ;
        return EXIT_FAILURE;
    }

    pattern(iValue); 
    return EXIT_SUCCESS; 

}
////////////////////////////////////////////////////////////////// 
//
//                            Sample output 
//
//  Enter a number: 5
//  2	4	6	8	10	%   
//
//
//  Enter a number: 7
//  2	4	6	8	10	12	14	
//
//
//  Enter a number: 3
//  2	4	6                                       
//          
////////////////////////////////////////////////////////////////// 