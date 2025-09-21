#include <iostream>
using namespace std;

int main()
{
    int num, fact;
    fact = 1;
    cout << "Enter the number whose factorial is to be found: ";
    cin >> num;
    for (int i = 1; i <= num; ++i)
    {
        fact *= i;
    }
    cout << "The factorial of " << num << " is " << fact << endl;
}