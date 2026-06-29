#include<iostream>
using namespace std;

int main()
{
    // PYRAMID PATTERN

    // int n=4, i, j;
    
    // for(i=0; i<n; i++)
    // {
    //     for(j=0; j<n-i-1; j++)
    //     {
    //         cout << " ";
    //     }

    //     // for(j=1; j<=i+1; j++) // ye bhi kr skte hain aur neeche wala bhi
    //     // {
    //     //     cout << j ;
    //     // }
    //     int num = 1; 
    //     for(j=0; j<i+1; j++){  // ye bhi sahi approach hai
    //         cout << num;
    //         num++;
    //     }

    //     for(j=i; j>=1; j--)
    //     {
    //         cout << j ;
    //     }

    //     cout << endl;
    // }
    // return 0; 

    // HOLLOW DIAMOND PATTERN : HARD HAI ISKO PHIR SE COPY PE BAAR BAR DEKHNA PADEGA.

    int n=4, i, j;

    //TOP
    for(i=0; i<n; i++) 
    {
        //spaces
        for(j=0; j<n-i-1; j++)
        {
            cout << " ";
        }

        cout << "*";

        if(i!=0){
            //spaces
            for(j=0; j<2*i-1; j++)
        {
            cout << " ";
        }

        cout << "*";
        }

        cout << endl;
    }
    // BOTTOM
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<i+1; j++)
        {
            cout << " ";
        }

        cout << "*";
        
        if(i!=n-2)
        {
            for(j=0; j<2*(n-i)-5; j++) // yahi thoda difficult part hai 
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
