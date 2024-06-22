// Write a program which accepts string from user and copy small characters of that string into another string
#include <stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while (*src != '\0')
    {
        if ((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30] = {0};

    printf("Enter a string: ");

    scanf("%29s", arr);
    StrCpySmall(arr, brr);

    printf("Small letters copied: %s\n", brr);

    return 0;
}
