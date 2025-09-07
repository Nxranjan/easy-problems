#include <iostream>
using namespace std;

int main()
{
    int number, product = 1;

    cout << "Enter value for n: ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        product *= i;
    }
    cout << "Product of first " << number << " of natural number is " << product << endl;
    return 0;
}