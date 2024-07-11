//Write application which accept filename from user and create that file
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h> 
#include <stdlib.h>

int main()
{
    int fd = 0;
    char FileName[30];

    printf("Enter the filename that you want to create : \n");
    scanf("%s", FileName);

    fd = creat(FileName, 0777);

    if (fd == -1)
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("File gets succeessfully created with fd %d\n", fd);
    }
    close(fd);
    return 0;
}