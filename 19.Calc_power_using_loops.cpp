#include <iostream>
using namespace std;

int main()
{
    int number, exponent, power;
    cout << "Enter the number whose power should be calculated: ";
    cin >> number;
    cout << "Enter the exponent value: ";
    cin >> exponent;
    power = 1;
    for (int i = 1; i <= exponent; i++)
    {
        power *= number;
    }
    cout << "The value of " << number << " raised to " << exponent << " is " << power << endl;
    return 0;
}