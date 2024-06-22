// Write a program which accept string from user and print below pattern.
#include <stdio.h>

void Pattern(char *str)
{
    int i, j;
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length - i; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }
}

int main()
{
    char arr[100];

    printf("Enter a string: ");
    scanf("%s", arr);

    Pattern(arr);

    return 0;
}
