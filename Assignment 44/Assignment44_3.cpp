//Write a generic program to accept N values from user and return addition of that values.
#include<iostream>
using namespace std;

template<class T>

T SumAll(T *Brr, int iSize)
{
    int i = 0;
    T iSum = 0;
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Brr[i];
    }
    return iSum;
}

int main()
{
    int iCount = 0, iRet = 0, i = 0;
    int *Arr = NULL;

    cout<<"Enter the number of elements you want to store :"<<endl;
    cin>>iCount;

    Arr = new int[iCount];

    cout<<"Enter the elements :"<<endl;
    for(i = 0; i < iCount; i++)
    {
        cin>>Arr[i];
    }

    iRet = SumAll(Arr, iCount);
    cout<<"Addition of all the elements is : "<<iRet<<endl;

    delete[] Arr;

    float fRet = 0;
    float *Crr = NULL;

    cout << "Enter the number of elements you want to store :" << endl;
    cin >> iCount;

    Crr = new float[iCount];

    cout << "Enter the elements :" << endl;
    for (i = 0; i < iCount; i++)
    {
        cin >> Crr[i];
    }

    fRet = SumAll(Crr, iCount);
    cout << "Addition of all the elements is : " << fRet << endl;

    delete[] Crr;
    return 0;
}