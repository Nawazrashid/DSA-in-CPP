#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    // SPECIAL CONTAINER :- PAIR

    pair<int, int> p1 = {3, 5};
    pair<char, int> p2 = {'a', 1};
    pair<string, int> p3 = {"nawaz", 7};

    cout << "first element of p3 is : " << p3.first << endl;
    cout << "second element of p3 is : " << p3.second << endl;

    // pair of pairs

    pair<int, pair<char, int>> p4 = {1, {'a', 3}};

    cout << "first element of p4 is : " << p4.first << endl; // 1
    cout << "first element of second pair of p4 is : " << p4.second.first << endl; // a
    cout << "second element of second pair of p4 is : " << p4.second.second << endl; //3

    
    // vector of pair

    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};

    vec.push_back({4, 5}); 
    vec.emplace_back(6, 7); // this is the main difference between push back and emplace back isme hame pair bana kr push krne ki zaroorat nhi hame bs value bhejni hoti hai.
    // in-place objects create kerta hai emplace back.

    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}