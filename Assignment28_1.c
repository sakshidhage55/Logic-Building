//Write a program which accept a string from user and copy the contents of that string into another string.(Implement strcpy() function)
#include <stdio.h>
void StrCpyX(char *src, char *dest)
{
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
    char arr[30] = "Marvellous Multi OS";
    char brr[30];
    StrCpyX(arr, brr);
    printf("%s", brr);
    return 0;
}