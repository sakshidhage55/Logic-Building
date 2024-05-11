//Accept amount in US dollar and rerurn its corresponding value in Indian currency. Consider 1$ as 70 rupees
#include<stdio.h>

int DollarToINR(int iNo)
{
    
    float f = iNo * 70;
    return f;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number of USD:");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}
// The time complexity of this program is constant, denoted as O(1)