#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float radius, area, pi;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    pi = 3.14;
    area = pi * (pow(radius, 2));
    cout << "The area of circle with radius " << radius << " is " << area << endl;
    return 0;
}