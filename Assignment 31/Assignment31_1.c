//Write a program which accept string from user count number of words from string
#include <stdio.h>
#include<stdbool.h>

int WordCount(char *str)
{
    int wordCount = 0;
    bool inWord = false;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            if (inWord)
            {
                wordCount++;
                inWord = false; 
            }
        }
        else
        {
            if (!inWord)
            {
                inWord = true;
            }
        }
        str++; 
    }

    if (inWord)
    {
        wordCount++;
    }

    return wordCount;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf(str, 100, stdin);

    int wordCount = WordCount(str);

    if (wordCount == -1)
    {
        printf("Error: Invalid input string\n");
    }
    else
    {
        printf("Number of words in the string: %d\n", wordCount);
    }

    return 0;
}
