//Write generic program which accept one value and on number from user. Print that value that number of times on screen.
#include<iostream>
using namespace std;

template<class T>
void Display(T value, int iSize)
{
    int i = 0;
    for(i = 1; i <= iSize; i++)
    {
        cout<<value<<"\t";
    }
    cout<<endl;
}
int main()
{
    int iValue = 0;
    int iNo = 0;

    cout<<"Enter the value that you want to display on screen : "<<endl;
    cin>>iValue;
    cout<<"How many times you want to display the value : "<<endl;
    cin>>iNo;
    Display(iValue, iNo);

    char ch;
    cout << "Enter the value that you want to display on screen : " << endl;
    cin >> ch;
    cout << "How many times you want to display the value : " << endl;
    cin >> iNo;
    Display(ch, iNo);

    float fValue = 0.0f;
    cout << "Enter the value that you want to display on screen : " << endl;
    cin >> fValue;
    cout << "How many times you want to display the value : " << endl;
    cin >> iNo;
    Display(fValue, iNo);
    return 0;
}