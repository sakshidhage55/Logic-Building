//Write a program which accepts 2 stringd from user and concat N charaters of second string after first string. Value of N should be accepted from user.(Implement strncat() function).
//If third parameter is greater than the size of second string then concat whole string after first string.
#include<stdio.h>

void StrNCatX(char *src, char *dest, int iCnt)
{
    while(*src != '\0')
    {
        src++;
    }
    while((*dest != '\0') && (iCnt != 0))
    {
        *src = *dest;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";
    int N;

    printf("Enter the number of characters to concatenate: ");
    scanf("%d", &N);

    StrNCatX(arr, brr,N);

    printf("%s", arr);

    return 0;
}