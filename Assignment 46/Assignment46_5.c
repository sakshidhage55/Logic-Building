//Write application which accept filename from user and one string from user. Write that string at the end of file.
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h> 
#include <stdlib.h>
#include <string.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char FileName[30];
    char Arr[100];
    char Buffer[100] = {'\0'};

    printf("Enter the filename that you want to open : \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR | O_APPEND);

    if (fd == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }

    printf("Enter the data that you want to write : \n");
    scanf("  %[^'\n']s", Arr);

        if (write(fd, Arr, strlen(Arr)) == -1)
    {
        printf("Unable to write to the file\n");
        close(fd);
        return 0;
    }

    while ((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        printf("Data from the file : %s", Buffer);
    }

    close(fd);

    return 0;
}