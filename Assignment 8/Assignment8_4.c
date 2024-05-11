// Write a program which accept temperature in Fahrenheit and convert it into calsius(1 celsius = (Fahrenheit - 32)*(5/9))
#include <stdio.h>

int FhtoCs(float fTemp)
{
    double Temp = 0.0;
    Temp = (fTemp - 32) * (5 / 9);
    return Temp;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("%f in celsius is: %d", fValue, dRet);

    return 0;
}
// The time complexity of this program is O(1), which means it's constant time complexity.