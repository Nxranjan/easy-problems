#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    num1 = 10;
    num2 = 5;
    cout << "Value before swapping" << endl;
    cout << "The value of num1 is " << num1 << endl;
    cout << "The value of num2 is " << num2 << endl;

    num3 = num1;
    num1 = num2;
    num2 = num3;

    cout << "\nValues after swapping" << endl;
    cout << "The new value of num1 is " << num1 << endl;
    cout << "The new value of num2 is " << num2 << endl;
    return 0;
}
