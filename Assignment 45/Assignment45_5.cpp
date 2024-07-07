//Write generic program to accept N values and reverse the contents
#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    int Start = 0;
    int End = iSize - 1;
    while(Start < End)   
    {
        T temp = arr[Start];
        arr[Start] = arr[End];
        arr[End] = temp;
        Start++;
        End--;
    }
}
int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    cout<<"Original array arr is :"<<endl;
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout << endl;
    Reverse(arr,9);

    cout<<"Reversed array arr is : "<<endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i]<<"\t";
    }
    cout<<endl<<endl;

    float brr[] = {10.36, 20.25, 30.89, 10.25, 30.96, 40.40, 10.87, 40.37, 10.65};
    cout << "Original array brr is :" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << brr[i]<<"\t";
    }
    cout<<endl;
    Reverse(brr, 9);
    cout << "Reversed array brr is : " << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << brr[i]<<"\t";
    }
    cout << endl;
    return 0;
}