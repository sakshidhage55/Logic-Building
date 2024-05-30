//Write a program which accept string from user and accept one character. Return index of first occurrence of that character.
#include <stdio.h>
#include <stdlib.h>

int FirstChar(char *str, char ch)
{
    int i = 0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return i;
        }
        str++;
        i++;
    }
    return -1; 
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    while (getchar() != '\n')
        ;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    iRet = FirstChar(arr, cValue);

    if (iRet != -1)
    {
        printf("Character location is: %d\n", iRet);
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}
