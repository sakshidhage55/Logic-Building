//Accept one character from user and convert case of that character
#include<stdio.h>
void DisplayConvert(char CValue)
{
    if (CValue >= 'a' && CValue <= 'z')
    {
        printf("The character in lowercase: %c\n", CValue - 32);
    }
    else if (CValue >= 'A' && CValue <= 'Z')
    {
        printf("The character in uppercase: %c\n", CValue + 32);
    }
    else
    {
        printf("Not an alphabet character.\n");
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}