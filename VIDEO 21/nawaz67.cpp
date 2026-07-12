#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
using namespace std;

int main()
{
    //TYPES OF SET :
    // 1. MULTI SET :- it can store duplicate values and in sorted manner.

    multiset<int> ms;

    ms.insert(2);
    ms.insert(1);
    ms.insert(4);
    ms.insert(3);
    ms.insert(6);
    ms.insert(4);
    ms.insert(3);
    ms.insert(6);

    
    for(auto val : ms){
        cout << val << " ";
    }
    cout << endl;

    //output:- 
    // 1 2 3 3 4 4 6 6

    // 2. UNORDERED SET :- cannot print duplicate values and also values are printed in unsorted order. Also upper and lower bound not defined for this unordered set because our elements are not sorted.

    unordered_set<int> os;

    os.insert(2);
    os.insert(1);
    os.insert(4);
    os.insert(3);
    os.insert(6);
    os.insert(4);
    os.insert(3);
    os.insert(6);

    for(auto val : os){
        cout << val << " ";
    }
    cout << endl;

    // Time complexity: practically O(1) hi aati hai kabhi kabar O(n) aa jata hai.
    //insert :- O(1)
    //erase :- O(1)
    //count :- O(1)

    return 0;
}