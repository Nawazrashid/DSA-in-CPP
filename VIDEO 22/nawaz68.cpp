#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second){
        return true;
    }
    if(p1.second > p2.second){
        return false;
    }

    if(p1.first < p2.first) return true; // agar second wali value same ho gyi to fir ham first vali value ke hisaab se sorting krenge.
    else return false;
}

int main()
{
    // ALGORITHMS
    // 1. SORTING
    // for array :-
    int arr[5] = {3, 1, 8, 5, 2};

    sort(arr, arr+5);

    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

    // for vector :-
    vector<int> vec = {5, 6, 3, 9, 1};

    sort(vec.begin(), vec.end());

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    //for sorting in descending order:-

    vector<int> vec2 = {5, 9, 1, 4, 2};

    sort(vec2.begin(), vec2.end(), greater<int> ());

    for(int val : vec2){
        cout << val << " ";
    }
    cout << endl;

    // for pairs :-

    vector<pair<int, int>> vec3 = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};

    sort(vec3.begin(), vec3.end());

    for(auto p : vec3){
        cout << p.first << " " << p.second << endl;
    }

    // output:-
    // 2 1
    // 3 1
    // 5 2
    // 7 1

    // output jo aaya hai wo pair ke first value ko compare krne pr aaya hai usko ascending order me print kiya hai.

    // agar hame pair ki doosri value ke hissaab se sorting krni hai to ham ek custom comparator banaenge jisko ko ham int main ke upar define kiye hain bool comparator().

    vector<pair<int, int>> vec4 = {{3, 1}, {2, 3}, {7, 1}, {5, 2}};

    sort(vec4.begin(), vec4.end(), comparator);

    for(auto p : vec4){
        cout << p.first << " " << p.second << endl;
    }
    
    // output:-
    // 3 1
    // 7 1
    // 5 2
    // 2 3

    return 0;
}