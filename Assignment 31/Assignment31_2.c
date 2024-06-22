//Write a program which accept string from user and return length of largest word.
#include<stdio.h>

int WordCount(char *str)
{
    int max_length = 0;
    int current_length = 0;

    while (*str != '\0')
    {
        
        while (*str == ' ')
            str++;

        current_length = 0;
        while (*str != ' ' && *str != '\0')
        {
            current_length++;
            str++;
        }

        if (current_length > max_length)
            max_length = current_length;

        while (*str == ' ')
            str++;
    }

    return max_length;
}

int main()
{
    char input_string[100];

    printf("Enter a string: ");
    scanf(" %[^\n]s", input_string); 

   
    int largest_length = WordCount(input_string);

    printf("Length of the largest word: %d\n", largest_length);

    return 0;
}