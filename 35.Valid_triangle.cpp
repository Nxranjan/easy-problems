#include <iostream>
using namespace std;

int main()
{
    int angle1, angle2, angle3, sum;
    cout << "Ener first angle: ";
    cin >> angle1;
    cout << "Enter second angle: ";
    cin >> angle2;
    cout << "Enter thrid angle: ";
    cin >> angle3;
    sum = angle1 + angle2 + angle3;
    if (sum == 180)
    {
        cout << "It is a traingle with angles " << angle1 << "," << angle2 << "," << angle3 << endl;
    }
    else
    {
        cout << "It is not a triangle" << endl;
    }
}