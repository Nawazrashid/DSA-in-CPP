#include<iostream>
#include<vector>

using namespace std;

void reverseVec(vector<int> &v)
{
    int start = 0 , end = v.size() - 1;

    while(start < end)
    {
        swap(v[start] , v[end]);
        start++;
        end--;
    }

    for(int val : v)
    {
        cout << val << " ";
    }
}

int main()
{
    // REVERSE THE VECTOR 

    vector<int>v = {1,2,3,4,5};

    cout << "Reverse of the given vector is : " ;
    reverseVec(v);

    return 0;
}