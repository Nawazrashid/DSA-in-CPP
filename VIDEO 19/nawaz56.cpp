#include<iostream>
#include<vector>
using namespace std;

int main(){

    // VECTOR ITERATORS : vec.begin() and vec.end().

    // vector<int> val = {1, 2, 3, 4, 5};

    // cout << *(val.begin()) << endl; // ye dereference kr dega jaha bhi begin iterator point kr rha hoga aur yaha pe wo 0th index pe point kr rha to output me hame 1 value dikhegi.

    // cout << *(val.end()) << endl; // ye 5 ko point nhi krta ye 5th index ko point krega jiski value hamare vector me hai hi nhi to output me garbage value ya phir 0 value dekhne ko mil skti hai.

    // initialisation of iterator.

    vector<int> val = {1, 2, 3, 4, 5};

    vector<int>::iterator it;

    for(it = val.begin(); it != val.end(); it++){
        cout << *(it) << " "; // output : 1 2 3 4 5.
    }
    cout << endl;

    // reverse iterator.

    // vector<int>::reverse_iterator itr; // hame baar baar isko likhne ki zroorat nahi hai ham bs for loop me auto likh ker apna iterator ka naam likh denge to compiler khud smjh jaega ki ye iterator hai.

    for(auto itr1 = val.rbegin(); itr1 != val.rend(); itr1++){
        cout << *(itr1) << " "; // output : 5 4 3 2 1.
    }
    cout << endl;

    // for(itr = val.rbegin(); itr != val.rend(); itr++){
    //     cout << *(itr) << " ";
    // }
    // cout << endl;
    
    return 0;
}