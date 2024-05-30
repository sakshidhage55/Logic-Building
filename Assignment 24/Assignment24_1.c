//Write a program which displays ASCII table.Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.
#include<stdio.h>

void DisplayASCII()
{
    printf("ASCII Table:\n");
    printf("| Symbol | Decimal | Hexadecimal | Octal  |\n");
    printf("---------------------------------------------------------\n");

    for (int i = 0; i <= 255; i++)
    {
        printf("|   %c   |   %3d   |     %02X      |  %03o   |\n",
               (i >= 32 && i <= 126) ? (char)i : ' ', i, i, i);
    }

}

int main()
{
    DisplayASCII();

    return 0;
}