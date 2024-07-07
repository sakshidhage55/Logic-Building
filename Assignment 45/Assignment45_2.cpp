//Write generic program to accept N values and count frequency of any specific value.
#include<iostream>
using namespace std;

template <class T>
int Frequency(T *arr, int iSize, T iNo)
{
    int iCount = 0, i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(arr[i] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int arr[] = { 10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = Frequency(arr,9,10);
    cout<<"Frequency of 10 is : "<<iRet<<endl;

    float brr[] = {10.3, 20.5, 30.8, 10.5, 30.8, 40.8, 10.9, 40.7, 10.3};
    int fRet = Frequency(brr, 9, 10.3f);
    cout << "Frequency of 10.3 is : "<<fRet;

    return 0;
}