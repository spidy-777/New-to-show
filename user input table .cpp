#include<iostream>
using namespace std;

int main() {
    int num, i = 1;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Table of " << num << ":\n";
    while(i <= 10) {
        cout << num << " * " << i << " = " << num * i << endl;
        i++;
    }
    
    return 0;
}