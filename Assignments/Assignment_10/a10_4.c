
#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : F to C
//  Description     : converts temp form farenheit to celcius 
//  Input           : int 
//  Output          : float 
//  Author          : Vedant Kalidas Barne
//  Date            : 31/10/2026
//
//////////////////////////////////////////////////////////
float convertFtoC(int iNo)
{
    float fTempinC = 0.0f;

    fTempinC = (iNo - 32) * (5.0f / 9.0f);

    return fTempinC;
}

int main()
{
    int iTempinf = 0;
    float fRet = 0.0f;

    printf("Enter temp in F : \n");
    scanf("%d", &iTempinf);

    fRet = convertFtoC(iTempinf);

    printf("Temp in C is : %f\n", fRet);

    return EXIT_SUCCESS;
}
