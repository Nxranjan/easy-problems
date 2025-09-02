#include <iostream>
using namespace std;

int main()
{
    int length, breadth, area;
    cout << "Enter length of the rectangle: " << endl;
    cin >> length;
    cout << "Enter breadth of the rectangle: " << endl;
    cin >> breadth;
    area = length * breadth;
    cout << "The area of the rectangle is " << area << endl;
    return 0;
}