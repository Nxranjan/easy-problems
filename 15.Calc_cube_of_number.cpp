#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number, cube;
    cout << "Enter the number whose cube is be found:" << endl;
    cin >> number;
    cube = pow(number, 3);
    cout << "The cube of " << number << " is " << cube << endl;
    return 0;
}