// Write a program which accept string from user and convert it into upper case
#include <stdio.h>

void struprx(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] + ('A' - 'a');
        }
        i++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^'\n']s", arr);

    struprx(arr);

    printf("Modified string is %s", arr);

    return 0;
}