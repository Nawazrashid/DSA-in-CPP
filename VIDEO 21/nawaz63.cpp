#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    //NON SEQUENTIAL CONTAINER:-
    // MAP (key, value) here key will always be unique and value can be same but key will always be unique. and data is printed in sorted order in map.

    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera", 25});
    m.emplace("shoes", 60);

    // m.erase("tv"); // it will erase the key tv from the map and if we print the key then it will not be printed.

    for(auto p : m){ // p is pair so we do not define it we simply write auto and compiler will itself recognise it as pair.
        cout << p.first << " = " << p.second << endl;
    }

    cout << "count = " << m.count("laptop")<< endl; //ye bataega ki kitni key hain jo laptop hain mtlb yha output 1 aaega kyoki laptop ek hi hai.

    cout << "value = " << m["laptop"] << endl; // ye laptop ki value print kr dega jo 100 hai.

    if(m.find("camera") != m.end()){
        cout << "found" << endl;
    }else{
        cout << "not found" << endl;
    }

    //OUTPUT:-
    // camera = 25
    // headphones = 50
    // laptop = 100
    // shoes = 60
    // tablet = 120
    // tv = 100
    // watch = 50

    // ye jo output print ho rha wo key ke basis pe ho rha mtlb lexicographically order me jaise headphone ka h sbse chota hai aur key ke first letter ke comparison me isliye wo print hua pehle agar pehla letter match ho jaega to phir doosra letter dekhenge ham ki kon sa chota hai.

    // Time complexity:
    //insert :- O(logn)
    //erase :- O(logn)
    //count :- O(logn)
    return 0;
}