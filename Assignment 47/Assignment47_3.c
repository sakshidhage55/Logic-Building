// Write a program whixh accpets filename from user and count number of white spaces from that file
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>

int CountWhiteSpace(char FName[])
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
            if (Buffer[i] == ' ')
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
    int iRet = 0;

    printf("Enter filename: ");
    scanf("%s", FileName);

    iRet = CountWhiteSpace(FileName);

    printf("Number of white spaces are %d\n", iRet);

    return 0;
}