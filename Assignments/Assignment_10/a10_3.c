#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : km to m 
//  Description     : converts km to meteres 
//  Input           : int 
//  Output          : int 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
int KmtoM(int iNo ) {
    int Met = 0 ;
    Met = iNo *1000 ; 
    return Met ; 
}
int main(){
    int iKm = 0 ; 
    int iRet = 0 ;

    
    printf("Enter km : "); 
    scanf("%d", &iKm ) ; 

    iRet = KmtoM(iKm);

    printf("%d\n", iRet );


    return EXIT_SUCCESS; 

}