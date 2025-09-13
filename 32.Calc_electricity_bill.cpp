#include <iostream>
using namespace std;

int main()
{
    int units, bill;
    cout << "The slab rates of electriity are:" << endl
         << "For 100 untis = Rs.5/- per unit" << endl
         << "For 100-200 units = Rs.10/- per unit" << endl
         << "For 200-300 units = Rs.15/- per unit" << endl
         << "For 300 units+ = Rs.20/- per unit" << endl;
    cout << "Enter the number of units of electricity: ";
    cin >> units;
    if (units <= 100)
    {
        bill = units * 5;
        cout << "The total bill is Rs." << bill << "/-"<<endl;
    }
    else if (units <= 200)
    {
        bill = (100 * 5) + ((units-100) * 10);
        cout << "The total bill is Rs." << bill << "/-"<<endl;
    }
    else if (units <= 300)
    {
        bill = (100 * 5) + (100 * 10) + ((units - 200) * 15);
        cout << "The total bill is Rs." << bill << "/-"<<endl;
    }
    else if (units > 300)
    {
        bill = (100 * 5) + (100 * 10) + (100 * 15) + ((units - 300) * 20);
        cout << "The total bill is Rs." << bill << "/-"<<endl;
    }
    return 0;
}
