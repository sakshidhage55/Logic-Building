//Accept string from user and reverse the contents of that string by toggling the case.
#include<stdio.h>

void StrRevTogX(char *str)
{
    char temp;
    char *first, *last;
    first = str;
    last = str;
    while(*last != '\0')
    {
        last++;
    }
    last--;
    while(first <= last)
    {
        char temp = *first;

        if (*first >= 'A' && *first <= 'Z')
        {
            *first = *first + 32;
        }
        else if (*first >= 'a' && *first <= 'z')
        {
            *first = *first - 32;
        }

        if (*last >= 'A' && *last <= 'Z')
        {
            *first = *last + 32;
        }
        else if (*last >= 'a' && *last <= 'z')
        {
            *first = *last - 32;
        }
        else
        {
            *first = *last;
        }

        if (temp >= 'A' && temp <= 'Z')
        {
            *last = temp + 32;
        }
        else if (temp >= 'a' && temp <= 'z')
        {
            *last = temp - 32;
        }
        else
        {
            *last = temp;
        }

        first++;
        last--;
    }

    if (first == last)
    {
        if (*first >= 'A' && *first <= 'Z')
        {
            *first = *first + 32;
        }
        else if (*first >= 'a' && *first <= 'z')
        {
            *first = *first - 32;
        }
    }
}


int main()
{
    char arr[50] = "Marvellous";

    StrRevTogX(arr);

    printf("%s", arr);

    return 0;
}