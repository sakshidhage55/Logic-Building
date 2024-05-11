//Write a program which accept area in square feet and convert it into square meter(1 square feet = 0.0929 Square meter)
#include <stdio.h>

double SquareMeter(int iValue)
{
    double dmeter = 0.0;
    dmeter = 0.0929 * iValue; // Correcting the conversion factor
    return dmeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("%d square feet is equal to %.2lf square meters.", iValue, dRet); // Using %lf for double
    return 0;
}
//The time complexity of this program is O(1), which means it's constant time complexity.