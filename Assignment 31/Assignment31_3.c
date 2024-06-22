//Write a program which accept string from user and reverse each word in place
#include <stdio.h>

void reverse(char *start, char *end)
{
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void StrWrdRev(char *str)
{
    char *start = str;
    char *end = str;

    while (*end != '\0')
    {
        while (*start == ' ')
        {
            start++;
        }

        end = start;
        while (*end != ' ' && *end != '\0')
        {
            end++;
        }
        end--; 
        
        reverse(start, end);

        
        start = end + 2; 
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    StrWrdRev(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
