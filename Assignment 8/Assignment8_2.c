//Write a program which accept width and height of rectangle from user and calculate its area(area = width * height)
#include <stdio.h>
double RectangleArea(float h1, float w1)
{
    double Area = 0;
    if (h1 < 0 || w1 < 0)
    {
        h1 = -h1;
        w1 = -w1;
    }
    Area = h1 * w1;
    return Area;
}

int main()
{
    float height = 0.0;
    float width = 0.0;
    double dRet = 0.0;

    printf("Enter height:");
    scanf("%f", &height);

    printf("Enter width:");
    scanf("%f", &width);

    dRet = RectangleArea(height, width);
    printf("Area of the rectangle: %lf", dRet);
    return 0;
}
// The time complexity of this program is O(1), which means it's constant time complexity.