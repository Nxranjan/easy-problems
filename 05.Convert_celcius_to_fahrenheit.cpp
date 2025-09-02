#include <iostream>
using namespace std;

int main()
{
    int celcius, fahrenheit;
    cout << "Enter temperature in celcius: " << endl;
    cin >> celcius;
    fahrenheit = (celcius * 1.8) + 32;
    cout << "The temperature in fahrenheit is " << fahrenheit << endl;
    return 0;
}
