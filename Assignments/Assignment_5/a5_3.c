#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



/////////////////////////////////////////////////////////
// 
//  Function name       :grades
//  Description         :checks grades of students 
//  Input               :float
//  Output              :void
//  Date                :21/10/2026
//
/////////////////////////////////////////////////////////
void Grades(int iNo)
{
    if(iNo <=100 && iNo >=90) printf("A");
    else if(iNo <=89 && iNo >=75) printf("B");
    else if (iNo<= 74 && iNo >=60 ) printf("C");
    else if (iNo <=59 && iNo >=40) printf("D");
    else if (iNo <=39 && iNo>=0) printf("FAIL");
}


int main()

{
    float iMarks= 0.0f;


    printf("enter Marks : \n");
    scanf("%f", &iMarks);

    
    Grades(iMarks);

    


    return EXIT_SUCCESS;

}