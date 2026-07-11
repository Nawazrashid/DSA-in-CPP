#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    // NON SEQUENCIAL CONTAINERS :-
    // STACK : last in first out data structure.

    stack<int> s;

    s.push(1); // stack : 1
    s.push(2); // stack : 2  1
    s.push(3); // stack : 3  2  1

    // s.pop(); // stack : 2  1

    // cout << "top of the stack is: " << s.top() << endl; // 2

    // while(!s.empty()){
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // cout << endl;


    stack<int> s2;

    s2.swap(s);

    cout << "size of s: " << s.size() << endl; // 0
    cout << "size of s2: " << s2.size() << endl; //3

    return 0;
}