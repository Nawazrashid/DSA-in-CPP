#include<iostream>
using namespace std;

int main()
{
    // FIND CHARACTER LOWERCASE OR UPPERCASE
    char ch ;
    cout << "Enter a character: ";
    cin >> ch ;
    if (ch >= 'a' && ch <= 'z') // or you can write (ch >= 97 && ch <= 122)
    {
        cout << "Lowercase character" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') // or you can write (ch >= 65 && ch <= 90)
    {
        cout << "Uppercase character" << endl;
    }
    else
    {
        cout << "Not an alphabet character" << endl;
    }
    return 0;
}