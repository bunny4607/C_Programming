// Calculate employee bonus

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CalculateBonus
//  Description     : Calculates bonus based on salary and years of service
//  input           : float, int
//  output          : void
//  Author          : Vedant Kalidas Barne
//  Date            : 21/10/2026
//
//////////////////////////////////////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (fSalary <= 0 || iYears < 0)
    {
        printf("Invalid input \n");
        return;
    }

    if (iYears > 10)
    {
        fBonus = fSalary * 0.15f;
    }
    else if (iYears >= 5 && iYears <= 10)
    {
        fBonus = fSalary * 0.10f;
    }
    else
    {
        fBonus = fSalary * 0.05f;
    }

    printf("Bonus = %.2f\n", fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary : \n");
    scanf("%f", &fSalary);

    printf("Enter years of service : \n");
    scanf("%d", &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}