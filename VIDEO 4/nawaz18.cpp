#include<iostream>
using namespace std;

int main()
{
    // int n=5, i, j;

    // for(i=0; i<n; i++)
    // {
    //     int num = 1;
    //     for(j=0; j<i+1; j++)
    //     {
    //         cout << num << " ";
    //         num ++;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // REVERSE TRIANGLE PATTERN : APNE SE KR LIYA MAINE.
    // int n=4, i, j;

    // for(i=0; i<n; i++)
    // {
    //     for(j=i+1; j>0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // REVERSE TRIANGLE PATTERN FOR CHARACTERS : YE HARD THA EK BAAR ME NHI KAR PAYA.

    int n=4, i, j;
    
    for(i=0; i<n; i++)
    {   
        char ch = 'A' + i;    
        for(j=i+1; j>0; j--)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
    return 0;

}