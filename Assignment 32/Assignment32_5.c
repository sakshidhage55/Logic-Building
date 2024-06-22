//
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
        for (j = 0; j <= i; j++)
        {
            char ch = str[j];
           
            if (ch >= 'A' && ch <= 'Z')
            {
                ch = ch + ('a' - 'A');
            }
            printf("%c ", ch);
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
