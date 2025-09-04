#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, avg;
    cout << "Enter num1: " << endl;
    cin >> num1;
    cout << "Enter num2: " << endl;
    cin >> num2;
    cout << "Enter num3: " << endl;
    cin >> num3;
    avg = (num1 + num2 + num3) / 3;
    cout << "The average of the three numbers is " << avg << endl;
    return 0;
}
