//greater of 2 nos 

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////
// 
//  Function name       :checking eligiblity
//  Description         :taking age as ip from user and checking age eliblity
//  Input               :int
//  Output              :int
//  Date                :20/10/2026
//
//////////////////////////////////////////////////////////////////

int checkEligiblity(int iNo)
{
    if(iNo>=18) return 1;
    else if (iNo<0) return 0; 
    else if (iNo>=0 && iNo<18) return 2;
    
}

int main()
{

    int iAge = 0;
    int iRet = 0 ;
    

    printf("Enter age : \n");
    scanf("%d", &iAge );

    iRet = checkEligiblity(iAge);

    if(iRet == 1 ) printf("Eligible to vote \n");
    else if (iRet == 0 )printf("Invalid input \n");
    else if  (iRet == 2 ) printf("Not eligible to vote \n");




    

    return EXIT_SUCCESS;

}
