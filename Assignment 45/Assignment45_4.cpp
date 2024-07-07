// Write generic program to accept N values and search last occurrence of any specific value.
#include <iostream>
using namespace std;

template <class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
    {
        for (int i = iSize; i >= 0; i--)
        {
            if (arr[i] == iNo)
            {
                return i;
            }
        }
        return -1;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = SearchFirst(arr, 9, 10);
    if (iRet != -1)
    {
        cout << "Last occurrence of 10 is at : " << iRet << endl;
    }
    else
    {
        cout << "10 is present in the array" << endl;
    }

    float brr[] = {10.3, 20.5, 30.8, 10.5, 30.8, 40.8, 10.9, 40.7, 10.3};
    int fRet = SearchFirst(brr, 9, 30.8f);
    if (fRet != -1)
    {
        cout << "Last occurrence of 30.8 is at : " << fRet;
    }
    else
    {
        cout << "30.8 is present in the array" << endl;
    }
    return 0;
}