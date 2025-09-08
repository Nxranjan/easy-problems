#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter year: ";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << "The year " << year << " is a leap year" << endl;
    }
    else
    {
        cout << "The year " << year << " is not a leap year" << endl;
    }
    return 0;
}