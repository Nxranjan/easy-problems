#include <iostream>
using namespace std;

int main()
{
    int num, i, j, c;
    cout << "Enter how many prime numbers to be printed: ";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        c = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                c++;
        }
        if (c == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
