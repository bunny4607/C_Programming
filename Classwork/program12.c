#include<stdio.h>
#include<stdlib.h>
int main()
{
     

    int no = 0; 

    printf("enter number:  \n"); 
    if (scanf("%d", &no) != 1){
      fprintf(stderr,"INVALID INPUT");
      return EXIT_FAILURE;

    }
    printf("Input is valid\n");


    return EXIT_SUCCESS;
}