#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

int main()
{   
    // SEQUENCE CONTAINERS:-
    // DEQUE : DOUBLE ENDED QUEUE --> dynamic arrays so random access is possible.
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);

    for(int val : d){
        cout << val << " ";
    }
    cout << endl;

    cout << "element at index 2 is: " << d[2] << endl; // random access is possible.

    return 0;
}