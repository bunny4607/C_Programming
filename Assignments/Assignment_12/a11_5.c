#include<stdio.h>
#include<stdlib.h>

void displayRange(int iNo1, int iNo2 ){
    int i = 0 ; 
    if(iNo1 > iNo2 ){
        printf("invalid input "); 
        return ; 
    }
    for (i = iNo2; i>=iNo1; i--){

        printf("%d\t", i); 
    }
}
int main(){

    int iValue1 = 0 ; 
    int iValue2 = 0 ;

    printf("Enter lower  limit : \n");
    scanf("%d", &iValue1);
    
    printf("Enter higher limit : \n");
    scanf("%d", &iValue2); 

    displayRange (iValue1,iValue2); 
    return EXIT_SUCCESS;

}