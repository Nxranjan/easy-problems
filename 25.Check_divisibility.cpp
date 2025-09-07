#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    if (number % 5 == 0 && number % 11 == 0)
    {
        cout << "The number " << number << " is divisible both by 5 and 11" << endl;
    }
    else
    {
        cout << "The number " << number << " is not divisible by both 5 and 11" << endl;
    }
    return 0;
}