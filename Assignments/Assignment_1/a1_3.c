#include<stdio.h>

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