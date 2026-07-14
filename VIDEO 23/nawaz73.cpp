#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    // how to input character in string:-

    string str;

    // cin >> str; // isko nahi use krna hai agar aapko koi sentence print krna hai jisme space present ho.

    getline(cin, str);

    cout << "output : " << str << endl; // if i/p :- nawaz rashid then o/p:- nawaz kyoki cin white space dekhte hi ruk jata hai agar cin use kren to lekin agar get line use kre to poora sentence print ho jaega.

    string str1 = "nawaz rashid";

    for(int i = 0; i<str1.length(); i++){
        cout << str1[i] << " "; // ye poore character print kr dega.
    }
    cout << endl;

    // to reverse a string:-

    reverse(str1.begin(), str1.end());

    cout << str1 << endl; // o/p:- dihsar zawan

    return 0;
}