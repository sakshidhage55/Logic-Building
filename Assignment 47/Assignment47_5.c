// Write a program whixh accpets filename from user and one count from user and read thet iSizeber characters from starting position
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void ReadNumChar(char FName[], int num)
{
    int fd = 0, iReturn = 0;
    char *Buffer = (char *)malloc(num + 1);

    fd = open(FName, O_RDONLY);
    if (fd == -1)
    {
        printf("Unable to open the file\n");
        free(Buffer);
        return;
    }

    iReturn = read(fd, Buffer, num);
    if (iReturn == -1)
    {
        printf("Unable to read the file\n");
        close(fd);
        free(Buffer);
        return;
    }

    Buffer[iReturn] = '\0'; // Null-terminate the string
    printf("Read characters: %s\n", Buffer);

    close(fd);
    free(Buffer);
}

int main()
{
    char FileName[30];
    int num = 0;

    printf("Enter filename: ");
    scanf("%s", FileName);

    printf("Enter the number of characters to read: ");
    scanf("%d", &num);

    ReadNumChar(FileName, num);

    return 0;
}
