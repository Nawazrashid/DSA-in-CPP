#include<iostream>
using namespace std;

// void fun(){
//     int x = 25;
//     cout << "x = " << x << endl;
// }

int sum(int a, int b){
    return a+b ;
}

int main ()
{

    // fun();

    // cout << x << endl; // this thing will give error because x is not present in main function.

    // return 0;

    int x = 4, y = 5;
    cout << sum (x,y)<< endl;
    return 0;

}