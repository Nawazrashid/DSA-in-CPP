#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    // how to calculate the lenght of char array.

    char a[] = "nawaz rashid";
    int leng = 0;

    for(int i = 0; i<a[i]!= '\0'; i++){
        leng++;
    }

    cout << "lenght of the string is : " << leng << endl; // o/p:- 12 because a space is also included in this.

    return 0;
}
