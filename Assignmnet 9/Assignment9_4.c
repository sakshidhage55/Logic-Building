//Write a program which accept range from user and return addition of all even numbers in between that range(Range should be positive numbers only)
int RangeSumEven(int iStart, int iEnd)
{
    int i = 0;
    int sum = 0;
    for (i = iStart; i <= iEnd; i++)
    {
        if (i % 2 == 0)
        {
           sum = sum + i;
        }
    }
    return sum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point:");
    scanf("%d", &iValue1);

    printf("Enter endingpoint:");
    scanf("%d", &iValue2);
    iRet = RangeSumEven(iValue1, iValue2);
    
    printf("Addition of even numbers is:%d", iRet);

    return 0;
}