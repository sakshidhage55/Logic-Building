// Write a program which accept string from user and toggle the case.
#include <stdio.h>

void strtogglex(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] + ('A' - 'a');
        }
        else
        {
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^'\n']s", arr);

    strtogglex(arr);

    printf("Modified string is %s", arr);

    return 0;
}