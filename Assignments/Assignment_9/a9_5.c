#include<stdio.h>
#include<stdlib.h> 
//////////////////////////////////////////////////////////
//
//  Funciton name   : diff fact  
//  Description     : prints difference between odd and even fact 
//  Input           : int 
//  Output          : int 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
int DiffFact (int iNo ) {
    int Diff = 0 ; 
    if(iNo < 0 )  iNo = -iNo ; 
    int i = 0; 
    int oddFact = 1 ;
    int evenFact = 1 ;
     
    for (i =1 ; i <= iNo ; i++) {
        if(i%2 != 0 ){
            oddFact = oddFact* i ; 
        }
        else {
            evenFact = evenFact * i ; 
        }
        

    }
    Diff = evenFact - oddFact; 
    if (Diff<0) Diff = -Diff ; 

    return Diff  ; 
    
}
int main()
{

    int iValue = 0 ; 
    int iRet = 0 ;
    printf("Enter a number : ");
    scanf("%d", &iValue); 

    iRet = DiffFact(iValue); 

    printf("%d", iRet ); 

    return EXIT_SUCCESS;

}