// Write application which accept file name from user and open that file in read mode.
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h> 
#include <stdlib.h>

int main()
{
    int fd = 0;
    char FileName[30];
    char Arr[100] = {'\0'}; // Logic Buil pudhe garbage yenar nahi
    int iRet = 0;

    printf("Enter the filename that you want to open : \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }
    close(fd);

    return 0;
}