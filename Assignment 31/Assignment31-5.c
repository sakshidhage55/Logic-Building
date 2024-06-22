//Write a program which accept string from user and replace each occurrence of first character of each word into capital case
#include <stdio.h>

void StrCap(char *str)
{
    int firstCharFound = 1;

    while (*str != '\0')
    {
        if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r')
        {
            firstCharFound = 1;
        }
        else
        {
            if (firstCharFound)
            {
                if (*str >= 'a' && *str <= 'z')
                {
                    *str = *str - 32; 
                }
                firstCharFound = 0;
            }
        }
        str++;
    }
}

int main()
{
    char Arr[50] = "marvellous infosystems by piyush khairnar";

    StrCap(Arr);

    printf("%s", Arr);

    return 0;
}
