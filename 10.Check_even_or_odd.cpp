#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number to be checked: " << endl;
    cin >> num;
    
    if (num % 2 == 0)
    {
        cout << "\nThe number is even" << endl;
    }
    else if (num % 2 != 0)
    {
        cout << "\nThe number is odd" << endl;
    }
    else
    {
        cout << "Invalid input";
    }
    return 0;
}