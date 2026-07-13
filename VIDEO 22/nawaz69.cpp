#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // ALGORITHM 
    //2. REVERSE

    vector<int> vec = {1, 2, 3, 4, 5};

    reverse(vec.begin(), vec.end());

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    // output:- 
    // 5 4 3 2 1

    //3. NEXT PERMUTATION

    string s = "abc";

    next_permutation(s.begin(), s.end());

    cout << s << endl; // output :- acb

    string s1 = "acb";

    prev_permutation(s1.begin(), s1.end());

    cout << s1 << endl; // output :- abc


    //4. min and max

    cout << min(4, 5) << " " << max(6, 9) << endl; // output :- 4  9


    //5. swap

    int a = 3, b = 1;

    swap(a, b);

    cout << a << " " << b << endl; // o/p:- 1  3

    //6. max and min element 

    vector<int> v = {1, 2, 3, 4, 5};

    cout << "max element = " << *(max_element(v.begin(), v.end())) << endl;
    cout << "min element = " << *(min_element(v.begin(), v.end())) << endl;

    //7. binary search

    cout << binary_search(v.begin(), v.end(), 5) << endl; // output :- 1 because 5 is present in our vector.

    //8. count set bits

    int x = 15;

    cout << __builtin_popcount(x) << endl; // output :- 4 kyoki 15 ka binary form 1111 hota hai aur ye function number of 1's yani set bits ko count krke print karata hai.

    long int y = 16;

    cout << __builtin_popcountl(y) << endl; // output :- 1

    long long int z = 14;

    cout << __builtin_popcountll(z) << endl; // output :- 3
    
    return 0;
}