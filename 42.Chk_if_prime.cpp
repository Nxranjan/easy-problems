#include <iostream>
using namespace std;

int main()
{
    int num, divisor, i;
    cout << "Enter the number to be checked: ";
    cin >> num;
    if (num <= 0)
    {
        cout << num << " is not a prime number";
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                divisor++;
            }
        }
        if (num == 1)
        {
            cout << num << " is rather prime nor composite" << endl;
        }
        else if (divisor > 2)
        {
            cout << num << " is not a prime number" << endl;
        }
        else
        {
            cout << num << " is a prime number" << endl;
        }
    }
    return 0;
}