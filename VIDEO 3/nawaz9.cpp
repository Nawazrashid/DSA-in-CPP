#include<iostream>
using namespace std;

int main()
{
    // CONDITIONAL STATEMENT : if - else if - else
    int marks ;
    cout << "Enter your marks: ";
    cin >> marks ;

    if (marks >= 90)
    { 
        cout << "Grade A" << endl;
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "Grade B" << endl;
    }
    else
    {
        cout << "Grade C" << endl;
    }

    return 0;
}    