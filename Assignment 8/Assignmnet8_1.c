// Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14(Area = PI * Radius * Radius)
#include <stdio.h>
double CircleArea(int fRadius)
{
    double Area = 0;
    float PI = 3.14;
    if (fRadius < 0)
    {
        fRadius = -fRadius;
    }
    Area = PI * fRadius * fRadius;
    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius:");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);
    printf("Area of the circle: %lf", dRet);
    return 0;
}
// The time complexity of this program is O(1), which means it's constant time complexity.