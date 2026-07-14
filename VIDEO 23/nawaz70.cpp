#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    // character array

    char str[] = {'a', 'b', 'c', '\0'}; // \0 is a null character (1B). this make the str a string.

    cout << str << endl; // o/p:- abc
    cout << "string length = " << strlen(str) << endl; // o/p:- 3

    char str1[] = "hello"; // string literals.

    cout << "string length of str1 = " << strlen(str1) << endl; // o/p:- 5
    cout << "character at 2nd index = " << str1[2] << endl; // o/p:- l
    cout << "character at 5th index = " << str1[5] << endl; // o/p:- blank aaega kyoki null character ki koi value nahi hoti.

    // how to input and output the string.

    char s[13];

    cout << "enter char array : "; 
    // cin >> str;// agar ise use karenge :- agar hamne input me nawaz diya to output me bhi nawaz aa jaega lekin agar hamne input me nawaz rashid de diya to output me tab bhi nawaz hi aaega kyoki beech me space aajata hai to string whi tk rhegi hamari jaha hamra pehle space aaega.

    cin.getline(s, 13, '$'); // isme ham str aur uski length pass kiye hain aur iska use krke ham poora sentence tak print kara sakte hain. aur yaha pr $ DELIMITER hai isko agar ham apne string me kahin bhi input karaenge to output me $ ke pehle ka sb print ho jaega aur uske baad ka nhi print hoga.
    // example : i/p:- nawaz rashi$d is here // o/p:- nawaz rashi

    // cout << "output : " << str << endl;

    // if we want to print every character present in the string:-

    for(char ch : s){
        cout << ch << " "; // if input is nawaz rashid then o/p:- n a w a z  r a s h i d 
    }
    cout << endl;

    

    return 0;
}