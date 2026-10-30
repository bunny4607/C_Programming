#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : rep num   
//  Description     : prints numbers  
//  Input           : int
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
void RepeatNum(int iNo ){
    int i = 0 ; 
    for (int i = 1 ; i <= iNo ; i++ ){
        printf("%d\t" ,i );
    }
}
int main(){
    int iValue =0 ; 

    printf("Enter number : ");
    scanf("%d", &iValue ); 

    RepeatNum(iValue);

    return EXIT_SUCCESS;



}