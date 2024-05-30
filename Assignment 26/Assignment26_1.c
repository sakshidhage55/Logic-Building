//Write a program which accept string from user and convert it into lower case
#include<stdio.h>

void strlwrx(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
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
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is %s", arr);

    return 0;
}