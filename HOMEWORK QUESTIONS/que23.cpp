#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // LINEAR SEARCH USING VECTOR

    vector<int> vec = {2,4,5,8,9};
    int target = 8;

    int index = -1;

    for(int i = 0; i<vec.size(); i++)
    {
        if(vec[i] == target)
        {
            index = i;
            break;
        }
    }

    cout << "Index of the given target is : " << index << endl;

    return 0;
}