#include <iostream>
using namespace std;

int main()
{
    char digit;
    cout << "Enter the input to check if it is a digit or not: ";
    cin >> digit;
    if (isdigit(digit)){
        cout<<"It is a Digit"<<endl;
    }
    else {
        cout<<"It is not an Digit"<<endl; 
    }
    return 0;
}