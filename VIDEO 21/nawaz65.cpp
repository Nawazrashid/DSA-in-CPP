#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    // TYPES OF MAP
    // 2. UNORDERED MAP :- isme duplicate value nhi print hongi kisi bhi key ki. and our keys are printed in non sorted manner unlike map and multimap. kabhi bhi koi bhi key print ho skti hai.

    unordered_map<string, int> um;

    um.emplace("tv", 100);
    um.emplace("laptop", 100);
    um.emplace("fridge", 100);
    um.emplace("watch", 100);

    for(auto p : um){
        cout << p.first << " = " << p.second << endl;
    }

    //output:-
    // fridge = 100
    // laptop = 100
    // watch = 100
    // tv = 100

    // Time complexity: practically O(1) hi aati hai kabhi kabar O(n) aa jata hai.
    //insert :- O(1)
    //erase :- O(1)
    //count :- O(1)

    return 0;
}