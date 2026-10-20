#include<stdio.h>
//////////////////////////////////////////////////////////
//
//  Funciton name   : printing
//  Description     : printing numbers
//  Input           : null
//  Output          : void 
//  Author          : Vedant Kalidas Barne
//  Date            : 20/10/2026
//
//////////////////////////////////////////////////////////

void Display()
{
    int i1 =1;
    int i2 = 5;
    while (i1<= i2)
    {
        printf("%d\t", i1);
        i1++;

    }
}

int main(){
    Display();
    return 0;

}