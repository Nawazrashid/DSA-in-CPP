#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // DATA STUCTURES : VECTOR

    // vector<int> vec; // size of vector vec is 0 , vector jo hota hai wo dynamic hota hai fixed size ka nahi hota

    // cout << vec[0];  // fault aaega output me.
    // vector<int>vec = {1, 2, 3};
    // cout << vec[1] << endl;

    // vector<int> vec(3,0); // initialisation of array in which 3 is the size of the array and 0 is at every index.

    // cout << vec[0] << endl; // will print 0
    // cout << vec[1] << endl; // will print 0
    // cout << vec[2] << endl; // will print 0

    vector<int> vec(5,0);

    for(int i : vec){  // in vector i is not the index of the element stored , it is the value stored at each index.
        cout << i << endl;
    }

    vector<char> vecch = {'a', 'b', 'c', 'd'};

    for(char j : vecch){ // for each loop hai ye .
        cout << j << " ";
    }

    return 0;

}