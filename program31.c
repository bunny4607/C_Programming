#include<stdio.h>
#include<stdlib.h>
int main()
{
    char sName[30];
    int iAge = 0 ;
    float fMarks = 0.0f;

    printf("Enter your name: \n");
    scanf("%[^'\n']s", sName); 

    printf("Enter your age : \n");
    scanf(" %d", &iAge); //space added before next ip (forflush) similar to fflush

    printf("Enter your marks : \n");
    scanf(" %f", &fMarks);//space added before next ip (forflush)



    printf("Welcome %s \n" ,sName);
    printf("Your age is : %d \n", iAge);
    printf("Your marks are : %f\n", fMarks );
    return EXIT_SUCCESS;
}