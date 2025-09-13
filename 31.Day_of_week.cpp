#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to find the day: ";
    cin >> num;
    if (num == 1)
    {
        cout << "The day is Monday" << endl;
    }
    else if (num == 2)
    {
        cout << "The day is Tuesday" << endl;
    }
    else if (num == 3)
    {
        cout << "The day is Wednesday" << endl;
    }
    else if (num == 4)
    {
        cout << "The day is Thursday" << endl;
    }
    else if (num == 5)
    {
        cout << "The day is Friday" << endl;
    }
    else if (num == 6)
    {
        cout << "The day is Saturday" << endl;
    }
    else if (num == 7)
    {
        cout << "The day is Sunday" << endl;
    }
    else
    {
        cout << "Invalid number" << endl;
    }
    return 0;
}