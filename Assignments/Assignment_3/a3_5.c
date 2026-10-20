#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkVowel(char cValue)
{
    if (cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' || cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a character : \n");
    scanf("%c", &cValue);

    bRet = checkVowel(cValue);

    if (bRet == true)
    {
        printf("Vowel \n");
    }
    else
    {
        printf("Not vowel \n");
    }

    return EXIT_SUCCESS;
}