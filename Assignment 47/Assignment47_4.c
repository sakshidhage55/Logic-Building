// Write a program whixh accpets filename from user and one character from user and count occurrences of that characters from that file
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int CountOccurrence(char FName[], char ch)
{
    int fd = 0, i = 0, iCount = 0, iReturn = 0;
    char Buffer[100] = {'\0'};
    fd = open(FName, O_RDONLY);
    if (fd == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }

    while ((iReturn = read(fd, Buffer, sizeof(Buffer))) > 0)
    {
        for (i = 0; i < iReturn; i++)
        {
            if (Buffer[i] == ch)
            {
                iCount++;
            }
        }
    }

    close(fd);
    return iCount;
}

int main()
{
    char FileName[30];
    char ch;
    int iRet = 0;

    printf("Enter filename: ");
    scanf("%s", FileName);

    printf("Enter the character to count: ");
    scanf(" %c", &ch);

    iRet = CountOccurrence(FileName, ch);

    printf("Number of occurrences of '%c' are %d\n", ch, iRet);

    return 0;
}
