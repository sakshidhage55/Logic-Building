//Write a program which accept distance in kilometre and convert it into meter(1 kilometre = 1000 meter)
#include <stdio.h>

int KMtoMeter(int iNo)
{
    int m = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    m = iNo * 1000; // Convert kilometers to meters
    return m;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometers:");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("%d km distance in meters is: %d", iValue, iRet);
    return 0;
}
// The time complexity of this program is O(1), which means it's constant time complexity.
