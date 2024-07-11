// Write a program whixh accpets filename from user and count number of small characters from that file
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>

int CountSmall(char FName[])
{

    int fd = 0, i = 0, iCount = 0, iReturn = 0;
    char Buffer[100] = {'\0'};
    fd = open(FName, O_RDONLY); // Open the file in read-only mode

    if (fd == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }

    while ((iReturn = read(fd, Buffer, sizeof(Buffer))) > 0)
    {
        for (i = 0; i < iReturn; i++)
        {
            if (Buffer[i] >= 'a' && Buffer[i] <= 'z')
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

    iRet = CountSmall(FileName);

    printf("Number of small characters are %d\n", iRet);

    return 0;
}