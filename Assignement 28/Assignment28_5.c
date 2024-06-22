//Write a program which 2 strings from user and concat seconnd string after first string(Implement strcat() function)
#include <stdio.h>

void StrCatX(char *dest, char *src)
{
    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[100] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";

    StrCatX(arr, brr);

    printf("%s\n", arr);

    return 0;
}