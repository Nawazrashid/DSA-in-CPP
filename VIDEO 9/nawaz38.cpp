#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // DIFFERENCE BETWEEN SIZE AND CAPACITY OF THE VECTOR.

    vector<int> vec;

    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    cout << "size of the vector is : " << vec.size() << endl;  // will print 3

    cout << "capacity of the vector is : " << vec.capacity() << endl; // will print 4

    // sbse pehle hamne vector initialise kiya zero size ab agr ham isme push krenge kissi element ko to 1 size ka vector create ho jaega internally phir agar ham doosra element push krenge to pehle wo usi 1 size ke vector me jana chahega pr wo to pehle se hi bhara rhega isliye internally vector ki capacity double kr di jaegi ab vector ki size 2 hai kyoki usme do element hain ab agar phir ek aur element push kiya jaega to ab phir se vector ki capacity double kr di jaegi iska matlb 2*2 = 4 ho jaegi mtlb isme ab char element add ho skte hain pr hamare paas abhi 3 element hain to issi liye vector ki size = 3 rhegi kyoki 3 hi element hain lekin vector ki capacity = 4 ho jaegi.

    return 0;
}