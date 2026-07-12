#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    // TYPES OF MAP :
    // 1. MULTI MAP :- it allows duplicate key. And it does not allow [] to insert the value to the key we have to use insert or emplace function to add key and their value.

    multimap<string, int> mp;

    mp.insert({"tv", 100});
    mp.insert({"tv", 100});
    mp.insert({"tv", 100});
    mp.insert({"tv", 100});

    // mp.erase("tv"); // it will erase all the key with string as tv.

    mp.erase(mp.find("tv")); // it will erase only one key value .
    

    for(auto p : mp){ // p is pair so we do not define it we simply write auto and compiler will itself recognise it as pair.
        cout << p.first << " = " << p.second << endl;
    } 

    // output :-
    // tv = 100
    // tv = 100
    // tv = 100

    return 0;
}