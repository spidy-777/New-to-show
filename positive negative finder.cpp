#include<iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter any non-zero Number : "<<endl;
    cin >> num;
    if (num > 0)
    {
        cout << "Number is positive"<<endl;
    }
    else
    {
        cout << "Number is negative"<<endl;
    }

    return 0;
}
