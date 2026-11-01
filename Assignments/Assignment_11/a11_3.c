 #include<stdio.h>
#include<stdlib.h>

int  displayAddRange(int iNo1, int iNo2 ){
    int i = 0 ; 
    int iSum = 0 ;
    for (i = iNo1; i<=iNo2; i++){
        iSum = i+iSum ;
        
    }
    return iSum; 
}
int main(){

    int iValue1 = 0 ; 
    int iValue2 = 0 ;
    int iRet = 0 ;

    printf("Enter lower  limit : \n");
    scanf("%d", &iValue1);
    
    printf("Enter higher limit : \n");
    scanf("%d", &iValue2); 

    iRet = displayAddRange (iValue1,iValue2); 
    printf("%d", iRet ); 
    return EXIT_SUCCESS;

}