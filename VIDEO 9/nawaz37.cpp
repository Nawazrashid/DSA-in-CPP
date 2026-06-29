#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // VECTOR FUNCTIONS :
    // 1. size

    // vector<char> vec = {'a', 'b', 'c', 'd'};

    // cout << "size = " << vec.size() << endl;

    // 2. push_back

    vector<int> vecint ; // initially size is 0

    // cout << "size before push : " << vecint.size() << endl;

    vecint.push_back(25);
    vecint.push_back(35);
    vecint.push_back(45);

    // cout << "size after pushing the element : " << vecint.size() << endl;

    cout << "elements of the vectors are: ";

    for(int val : vecint){
        cout << val << " ";
    }

    cout << endl;

    // 3. pop_back

    // vecint.pop_back();

    // cout << "elements of the vectors after pop operation are: ";

    // for(int val : vecint){
    //     cout << val << " ";
    

    // 4. front 

    cout << "first element of the given vector is : " << vecint.front() << endl;

    // 5. back

    cout << "last element of the given vector is : " << vecint.back() << endl;

    // 6. at

    cout << "elements at index 1 is : " << vecint.at(1) << endl;

    // sbse pehle hamne vector initialise kiya zero size ab agr ham isme push krenge kissi element ko to 1 size ka vector create ho jaega internally phir agar ham doosra element push krenge to pehle wo usi 1 size ke vector me jana chahega pr wo to pehle se hi bhara rhega isliye internally vector ki size double kr di jaegi ab vector ki size 2 hai kyoki usme do element hain ab agar phir ek aur element push kiya jaega to ab phir se vector ki size double kr di jaegi iska matlb 2*2 = 4 ho jaegi mtlb isme ab char element add ho skte hain pr hamare paas abhi 3 element hain to issi liye vector ki size = 3 rhegi kyoki 3 hi element hain lekin vector ki capacity = 4 ho jaegi.

    return 0;
}