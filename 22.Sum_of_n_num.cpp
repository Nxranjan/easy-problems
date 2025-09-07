#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;

    cout << "Enter value for n: ";
    cin >> number;

    for (int i = 1; i <= number; ++i)
    {
        sum += i;
    }
    cout << "Sum of first " << number << " of natural number is " << sum << endl;
    return 0;
}