#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main()
{
    // SEQUENCE CONTAINERS:-
    // LIST : DOUBLY LINKED LIST --> random access of the elements are not possible.
    list<int> l;

    l.push_back(1); // list : 1
    l.push_back(2); // list : 1  2
    l.push_front(3); // list : 3  1  2
    l.push_front(5); // list : 5  3  1  2

    l.pop_back(); // list : 5  3  1
    l.pop_front(); // list : 3  1

    for(int val : l){
        cout << val << " ";
    }
    cout << endl;

    // cout << "element at index 1 is: " << l[1] << endl; // random access is not possible so this statement will not run and give the error if we run this.

    return 0;
}