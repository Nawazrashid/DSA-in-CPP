#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    // SET :- collection of unique  values and it is printed in sorted order.

    set<int> s;

    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(6);

    // // agar ham duplicate value insert krna chahe to wo nhi hongi aur set ka size bhi change nhi hoga jitna pehle tha utna hi rhega.
    // s.insert(1);
    // s.insert(2);

    // cout << s.size() << endl;

    for(auto val : s){
        cout << val << " ";
    }
    cout << endl;

    //output :-
    // 1 2 3 4 6

    // time complexity :-
    //count :- O(logn)
    //erase :- O(logn)
    //find :- O(logn)

    cout << "lower bound = "<<*(s.lower_bound(4)) << endl; // 4 will be printed if 4 is present in our set 

    cout << "lower bound when element not present = " << *(s.lower_bound(5)) << endl; // 6 will be printed kyoki 5 mere set me nhi hai to isliye 5 se just badi value print ho jaegi.

    cout << "lower bound when no other value present greater than the element and element also not present = " <<  *(s.lower_bound(7)) << endl; // yaha s.end() pr iterator chala jaega mtlb koi value nhi rhegi isliye output 0 aaega ya phir koi garbage value jaise mere me 5 aa rha.

    cout << "upper bound = " << *(s.upper_bound(4)) << endl; // upper bound me hame jo key di hoti hai ham usme search nhi krte hamesha usse just badi value ko return krte hain. iska matlb yaha output 6 aaega.

    return 0;
}