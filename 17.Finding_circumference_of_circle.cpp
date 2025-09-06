#include <iostream>
using namespace std;

int main()
{
    float radius, pi, circumference;
    cout << "Enter the radius of cicle: ";
    cin >> radius;
    pi = 3.14;
    circumference = 2 * pi * radius;
    cout << "The circumference of the circle with radius " << radius << " is " << circumference << endl;
    return 0;
}