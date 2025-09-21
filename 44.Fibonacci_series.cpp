#include <iostream>
using namespace std;
int main()
{
    int num, a, b, c;
    cout << "Enter a number :" << endl;
    cin >> num;
    a = 0;
    b = 1;
    for (int i = 0; i <= num; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}