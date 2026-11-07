#include<stdio.h>
#include<stdlib.h>
/*
.............................................

Function name : display schedule 
Description : Displays exam schdule based on division 
input : char 
output : void 
author : Vedant Kalidas Barne 
Date : 8/11/2026

.............................................
*/
void DisplaySchedule(char *cValue){

    if(cValue[0] == 'A') printf("Your exam at 7.00AM"); 
    else if(cValue[0] == 'B') printf("Your exam at 8.30AM"); 
    else if(cValue[0] == 'C') printf("Your exam at 9.20AM"); 
    else if(cValue[0] == 'D') printf("Your exam at 10.30AM");
    else printf("invalid input "); 




}
/*
.............................................

                        Entry point 

.............................................
*/
int main(){

    char cValue = '\0'; 

    printf("Enter a char: "); 
    if(scanf(" %c", &cValue)!=1 ){
        fprintf(stderr, "invaid input ");
        return EXIT_FAILURE; 

    }

    DisplaySchedule(&cValue);
    return EXIT_SUCCESS ; 

}

/*
.............................................
Sample output 

vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a char: A
Your exam at 7.00AM% 

vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a char: C
Your exam at 9.20AM% 

vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a char: D
Your exam at 10.30AM% 

.............................................
*/