#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    // NON SEQUENTIAL CONTAINERS :-
    // QUEUE : first in first out data structure.

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}