#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    // STRINGS IN C++

    string str = "nawaz rashid"; // dynamic in nature can be resize during run time.

    cout << str << endl; // o/p:- nawaz rashid

    str = "hello"; // we can change our string during run time.
    cout << str << endl; // o/p:- hello

    // but if do same for character array then it will give error because they are not dynamic in nature.

    // char chArr[] = "apna college";

    // // chArr[] = "nawaz"; // this line will give error.

    // cout << chArr << endl; // o/p:- apna college

    string str1 = "nawaz";
    string str2 = "rashid";
    string str3 = str1 + str2; // concatination.
    
    cout << (str1 == str2) << endl; // o/p:- 0 because both the strings are different.
    cout << (str1 < str2) << endl; // o/p:- 1 because according to lexographical order nawaz will occur first in the dictionary in comparison to rashid.

    cout << str3 << endl; // o/p:- nawazrashid

    cout << "string length = " << str3.length() << endl; // o/p:- 11

    return 0;
}