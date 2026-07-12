#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    //NON SEQUENTIAL CONTAINERS:-
    // PRIORITY QUEUE

    priority_queue<int> pq; // by default largest value has the highest priority.

    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);

    while(!pq.empty()){
        cout << pq.top() << " ";//element will be printed in descending sorted order i.e 10  5  4  3
        pq.pop();
    }
    cout << endl;


    // if we want our smallest element to be highest priority :-

    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(5);
    pq1.push(3);
    pq1.push(10);
    pq1.push(4);

    while(!pq1.empty()){
        cout << pq1.top() << " ";//element will be printed in ascending sorted order i.e 3  4  5  10
        pq1.pop();
    }
    cout << endl;

    //Time complexity of different functions of priority queue :-
    // top :- O(1)
    // push and emplace :- O(logn)
    // pop :- O(logn)

    return 0;
}