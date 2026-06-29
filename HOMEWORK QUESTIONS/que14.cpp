#include<iostream>
using namespace std;

int main()
{
    // WAP PROGRAM TO PRINT ALL THE PRIME NUMBERS FROM 2 TO N. : YE THODA SA MUSHKIL LAGA ISKO REVISE KRTE REHNA BHAI.

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i=2; i<=n; i++){

        bool prime = true;

        for (int j=2 ; j<i; j++){
            
            if(i % j == 0){
                prime = false;
                break;   // ye execute hone ke baad ham inner for loop se bahar chale jaenge phir if (prime == false) rehega jiski wajah se ye pata chal jaega ki i ki wo value prime nhi hai aur ham use print bhi nhi krenge uske baad i++ se i ki value badhegi aur aise hi ham agli i ki value ke liye check krenge.
            }
        }

        if(prime == true){
            cout << i << " ";
        }
    }

    return 0;
}