#include <iostream>
using namespace std;

int main()
{
    int num, i, product;
    cout << "Enter the number whose multiplication table is to be found: ";
    cin >> num;
    for (i = 1; i <= 10; i++)
    {
        product = num * i;
        cout << num << " * " << i << " = " << product << endl;
    }
    return 0;
}