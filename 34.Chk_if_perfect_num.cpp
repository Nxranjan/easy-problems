#include <iostream>
using namespace std;

int main()
{
    int num, i, sum=0;
    cout << "Enter number to check: ";
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        cout << "The number " << num << " is a perfect number" << endl;
    }
    else
    {
        cout << "The number " << num << " is not a perfect number" << endl;
    }
    return 0;
}