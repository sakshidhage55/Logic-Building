//Accept string from user and check whether the string is palindrome or not without considering its case.
#include<stdio.h>
#include<stdbool.h>

bool StrPallindrome(char *str)
{
    char *start = str;
    char *end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--; 

    while (start < end)
    {
        char c1 = tolower(*start);
        char c2 = tolower(*end);

        if (c1 != c2)
        {
            return false;
        }

        start++;
        end--;
    }

    return true;
}

int main()
{
    bool bRet;
    char arr[20] = "abccBa";

    bRet = StrPallindrome(arr);

    if(bRet == true)
    {
        printf("String is pallindrome\n");
    }
    else
    {
        printf("String is not pallindrome\n");
    }
    return 0;
}
