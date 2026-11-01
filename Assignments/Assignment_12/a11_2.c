#include<stdio.h>
#include<stdlib.h>

void displayEvenRange(int iNo1, int iNo2 ){
    int i = 0 ; 
    for (i = iNo1; i<=iNo2; i++){
        if (i%2 == 0 ){
            printf("%d\t", i); 
        }
        
    }
}
int main(){

    int iValue1 = 0 ; 
    int iValue2 = 0 ;

    printf("Enter lower  limit : \n");
    scanf("%d", &iValue1);
    
    printf("Enter higher limit : \n");
    scanf("%d", &iValue2); 

    displayEvenRange (iValue1,iValue2); 
    return EXIT_SUCCESS;

}