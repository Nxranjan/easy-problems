#include <iostream>
using namespace std;

int main()
{
    int num, last_digit, temp, num_rev;
    cout << "Enter the number to check: ";
    cin >> num;
    temp = num;
    num_rev=0;
    while (temp!=0){
        last_digit = temp % 10; // Divides the numebr by 10 and gets us the remainder.
        num_rev = (num_rev*10) + last_digit;
        temp = temp / 10; // Dividing by 10 to remove the last digit.
    }
    if (num_rev == num)
    {
        cout << "The number " << num << " is a palindrome"<<endl;
    }
    else
    {
        cout << "The number " << num << " is not a palindrome"<<endl;
    }
    return 0;
}