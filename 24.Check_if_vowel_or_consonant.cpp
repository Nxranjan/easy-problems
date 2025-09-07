#include <iostream>
using namespace std;

int main()
{
    char ch;
    bool vowel;
    cout << "Enter character to be searched: ";
    cin >> ch;
    vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (!isalpha(ch))
    {
        printf("Error! Non-alphabetic character\n");
    }
    else if (vowel)
    {
        cout << ch << " is a vowel" << endl;
    }
    else
    {
        cout << ch << " is a consonant" << endl;
    }
}