//Write a program which accepts string and displays it in reverse order.
#include<stdio.h>

void Reverse(char *str)
{
    int i = 0;
    int length = strlen(str);

    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]); 
    }
    printf("\n");
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^'\n']", arr);

    Reverse(arr);
    return 0;
}