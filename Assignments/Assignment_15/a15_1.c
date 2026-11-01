#include<stdio.h>
#include<stdlib.h>


int main(){
    char Name [ 30 ] ; 
    printf("Enter name : ") ; 
    scanf("%29[^\n]", Name ) ; 
    printf("your name is : %s\n", Name );
    return EXIT_SUCCESS; 

}