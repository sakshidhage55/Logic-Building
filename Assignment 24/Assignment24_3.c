//Accept a character from user. If it is capital then display all the characters from the input characters till Z.
//If input character is small then print all the characters in reverse order till a.
//In other cases return directly.
#include <stdio.h>

void Display(char ch) 
{
    char c = '\0';
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        for (c = ch; c <= 'Z'; c++)
        {
            printf("%c\t", c);
        }
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        for (c = ch; c >= 'a'; c--)
        {
            printf("%c\t", c);
        }
    }
    else
    {
        printf(" ");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character:");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}