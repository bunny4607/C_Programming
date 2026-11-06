#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////
/*
            Function name   : pattern 
            Description     : prints pattern taking input from user 

Enter number of rows : 4
Enter number of columns : 4
*	#	*	#	
*	#	*	#	
*	#	*	#	
*	#	*	#	

        
            input           : int , int 
            outout          : void
            Author          : Vedant Kalidas Barne
            Date            : 6/11/2026
*/
void pattern(int iRow , int iCol ){
    int i = 0 ; 
    int j = 0 ; 
    for(i = 1 ; i <= iRow ; i++){
        for(j = 1 ; j <= iCol; j++){
            if(j %2 != 0 ) {
                printf("*\t");
            }else printf("#\t"); 
        }
        printf("\n"); 
    }
}
////////////////////////////////////////////////////////////////// 
//
//                  Entery Point 
// 
////////////////////////////////////////////////////////////////// 

int main(){

    int iValue1 = 0 ; 
    int iValue2 = 0 ; 

    printf("Enter number of rows : "); 
    if (scanf("%d", &iValue1)!= 1){
        fprintf(stderr, "invalid input") ; 
        return EXIT_FAILURE ; 

    }

    printf("Enter number of columns : "); 
    if (scanf("%d", &iValue2)!= 1){
        fprintf(stderr, "invalid input") ; 
        return EXIT_FAILURE ; 
        
    }

    pattern(iValue1, iValue2) ; 

    return EXIT_SUCCESS ; 

}
////////////////////////////////////////////////////////////////// 
//
//                            Sample output 
//
//  Enter number of rows : 4
//  Enter number of columns : 4
//  *	#	*	#	
//  *	#	*	#	
//  *	#	*	#	
//  *	#	*	#	
//
//
//  Enter number of rows : 4
//  Enter number of columns : 5
//  *	#	*	#	*	
//  *	#	*	#	*	
//  *	#	*	#	*	
//  *	#	*	#	*	
//
//
//  Enter number of rows : 5
//  Enter number of columns : 6
//  *	#	*	#	*	#	
//  *	#	*	#	*	#	
//  *	#	*	#	*	#	
//  *	#	*	#	*	#	
//  *	#	*	#	*	#	

//  Enter number of rows : 5
//  Enter number of columns : 5
//  *	#	*	#	*	
//  *	#	*	#	*	
//  *	#	*	#	*	
//  *	#	*	#	*	
//  *	#	*	#	*                              
//          
////////////////////////////////////////////////////////////////// 