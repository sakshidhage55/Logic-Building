//Write generic program to find largest number from three numbers.
#include<iostream>
using namespace std;

template<class T>
T Max(T No1, T No2, T No3)
{
    if(No1 > No2 && No1 > No3)
    {
        return No1;
    }
    else if(No2 > No1 && No2 > No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}
int main()
{
    int A, B, C, iRet = 0;
    cout<<"Enter first number"<<endl;
    cin>>A;

    cout << "Enter second number" << endl;
    cin >> B;

    cout << "Enter third number" << endl;
    cin >> C;

    iRet = Max(A, B, C);
    cout<<"Maximun number is : "<<iRet<<endl;

    float X, Y, Z, fRet = 0;
    cout << "Enter first number" << endl;
    cin >> X;

    cout << "Enter second number" << endl;
    cin >> Y;

    cout << "Enter third number" << endl;
    cin >> Z;

    fRet = Max(X, Y, Z);
    cout << "Maximun number is : " << fRet;
    return 0;
}