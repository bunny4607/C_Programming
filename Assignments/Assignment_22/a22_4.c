#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////
/*
            Function name   : pattern 
            Description     : prints pattern taking input from user 
            Enter a number : 5
                #	1	*	#	2	*	#	3	*	#	4	*	#	5	*  
        
            input           : int 
            outout          : void
            Author          : Vedant Kalidas Barne
            Date            : 6/11/2026
*/
//////////////////////////////////////////////////////////////////

void pattern(int iNo){
    int i = 0 ; 
    for (i = 1 ; i <= iNo; i++){
        printf("#\t"); 
        printf("%d\t", i);
        printf("*\t"); 
    }
}
////////////////////////////////////////////////////////////////// 
//
//                  Entery Point 
// 
////////////////////////////////////////////////////////////////// 

int main(){
    int iValue = 0 ; 

    printf("Enter a number : "); 
    if (scanf("%d", &iValue)!=1) {
        fprintf(stderr, "Invalid input") ;
        return EXIT_FAILURE; 

    }

    pattern(iValue ) ; 

    return EXIT_SUCCESS ; 

}
////////////////////////////////////////////////////////////////// 
//
//                            Sample output 
//
//      Enter a number : 3
//      #	1	*	#	2	*	#	3	*	%   
// 
//                                                                                 vedantbarne@Vedants-MacBook-Air-2 Assignment22 % ./myexe
//      Enter a number : 5
//      #	1	*	#	2	*	#	3	*	#	4	*	#	5	*	%    
//      
//                           
//      Enter a number : 2
//      #	1	*	#	2	*                                         
//          
////////////////////////////////////////////////////////////////// 