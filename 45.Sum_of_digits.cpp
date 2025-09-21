#include <iostream>
using namespace std;

int main()
{
    int number, sum;
    cout << "Enter number whose sum of digits is to be found: ";
    cin >> number;
    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }
    cout << "The sum of the digit " << sum << " is " << sum;
    return 0;
}