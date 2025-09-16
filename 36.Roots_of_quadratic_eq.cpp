#include <iostream>
using namespace std;

int main()
{
    int a, b, c, root1, root2, disciminant;
    cout << "Enter the coefficient of x^2: ";
    cin >> a;
    cout << "Enter the coefficient of x: ";
    cin >> b;
    cout << "Enter the constant value: ";
    cin >> c;
    disciminant = (b * b) - (4 * a * c);
    if (disciminant < 0)
    {
        cout << "No real solutions" << endl;
    }
    else
    {
        root1 = (-b + disciminant) / 2 * a;
        root2 = (-b - disciminant) / 2 * a;
        cout << "The roots of the given equation is " << root1 << " , " << root2 << endl;
    }
    return 0;
}