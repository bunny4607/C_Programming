#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////
/*
            Function name   : pattern 
            Description     : prints pattern taking input from user 
            Enter number    : 6
                A	B	C	D	E	F
        
            input           : int 
            outout          : void
            Author          : Vedant Kalidas Barne
            Date            : 6/11/2026
*/
//////////////////////////////////////////////////////////////////  
void Pattern(int iNo) {
    char ch = '\0'; 
    int i = 0 ;
    ch = 'A'; 
    for(i = 1 ; i<= iNo; i++){
        
        printf("%c\t", ch ); 
        ch++ ;
    }

}
////////////////////////////////////////////////////////////////// 
//
//                  Entery Point 
// 
////////////////////////////////////////////////////////////////// 

int main(){
    int iValue = 0 ; 

    printf("Enter number : ") ; 
    if(scanf("%d", &iValue) != 1) {
        fprintf(stderr, "invalid input") ; 
        return EXIT_FAILURE ; 

    }

    Pattern(iValue) ; 

    return EXIT_SUCCESS ; 
}
////////////////////////////////////////////////////////////////// 
/*
                            Sample output 

Enter number : 3
A	B	C	


Enter number : 7
A	B	C	D	E	F	G	%

                                                                                  vedantbarne@Vedants-MacBook-Air-2 Assignment22 % ./myexe
Enter number : 5
A	B	C	D	E
*/
////////////////////////////////////////////////////////////////// 