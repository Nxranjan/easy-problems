#include <iostream>
using namespace std;

int main()
{
    int divisor, dividend, remainder;
    cout << "Enter dividend: "<<endl;
    cin >> dividend;
    cout << "Enter divisor:"<<endl;
    cin >> divisor;
    remainder = dividend % divisor;
    cout << "The remainder when " << dividend << " is divided by " << divisor << " is " << remainder<<endl;
    return 0;
}
