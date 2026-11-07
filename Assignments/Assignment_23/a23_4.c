#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//////////////////////////////////////////////////////// 
//      function name : display only numbers  
//      Description : displays only numbers from string taken from user 
//      input : string
//      output : void
//      author : Vedant Kalidas Barne
//      Date : 7th Nov 2026
//////////////////////////////////////////////////////// 
void returnNum(char *ch){
    char ch1 [30 ] ; 
    int i = 0 ; 
    int j = 0 ; 

    for(i = 0 ; i <= strlen(ch)-1; i++  ){
        if(
            (ch[i] >= '0' && ch[i] <= '9')
        )
        {
            ch1[j] = ch[i]; 
            j++; 
        }
        
    }
    printf("%29s", ch1); 
}

//////////////////////////////////////////////////////// 
//      Entery point 
//////////////////////////////////////////////////////// 

int main(){
    char cValue[30] ; 

    printf("Enter a string : "); 
    if(scanf("%29[^\n]s", cValue)!= 1){
        fprintf(stderr, "Invalid input"); 
        return EXIT_FAILURE ; 

    }
    returnNum(cValue) ;
    return EXIT_SUCCESS ; 

}
//////////////////////////////////////////////////////// 
//
//                  Sample output : 
/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_23 % ./myexe                
Enter a string : marve89llous21
                         8921%  
                         
                         
                         
vedantbarne@Vedants-MacBook-Air-2 Assignment_23 % ./myexe
Enter a string : demo
                          ??%                                                 
                                                                                                                              


*/
//