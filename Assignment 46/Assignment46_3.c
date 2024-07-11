//Write application which accept filename from user and read all data from that file and display contents on screen.
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h> 
#include <stdlib.h>

int main()
{
    int fd = 0;
    char FileName[30];
    char Buffer[100] = {'\0'};
    int iRet = 0;

    printf("Enter the filename that you want to open : \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }

    while ((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        printf("Data from the file : %s", Buffer);
    }

    close(fd);
    return 0;
}