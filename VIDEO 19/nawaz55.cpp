#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // MORE ABOUT VECTOR
    // 1. vector<int> nums2(nums1)
    vector<int> nums1 = {1, 2, 3, 4};

    vector<int> nums2(nums1); // iska matlb ye hai ki ham ek doosra vector create kiye hain aur hame usme same value chahiye nums1 vector jaisi to ham simply ye likh skte hain aur ab agr ham nums2 ki value print karaenge to same aayegi nums1 jaise.
    
    for(int val : nums2){
        cout << val << " ";
    }
    cout << endl;


    // 2. vector<int> nums(size, value).
    vector<int> nums3(5, 7); // iska matlb ye hai ki ham ek nums3 naam ka vector create kr rhe hain aur uski size 5 aur sabhi index pe 7 value assign hai.

    for(int i : nums3){
        cout << i << " ";
    }
    cout << endl;


    // 3. erase  
    vector<int> arr1 = {1, 2, 3, 4, 5};

    arr1.erase(arr1.begin()); //erase function kisi index se uski value erase kr skta hai jaise ham erase function me begin pointer paas kiye hain to wo pointer 0 index vale element ko point kr rha aur erase function usko remove kr dega.

    arr1.erase(arr1.begin() + 2); // agar hame index 2 waale element yani 3rd element of the vector ko delete krna hai to ham begin pointer me 2 add kr denge aur phir erase kr denge.

    for(int i : arr1){
        cout << i << " ";
    }
    cout << endl;

    vector<int> arr2 = {1, 2, 3, 4, 5};

    arr2.erase(arr2.begin() + 1, arr2.begin() + 3);// agar hame range of elements ko erase krna hai to hame starting aur ending index value dena hoga aur usse wo delete ho jaega jaise isme index 1 aur index 3 dono pass hua hai to 2,3 erase ho jaenge hamare vector se.

    for(int i : arr2){
        cout << i << " ";
    }
    cout << endl;

    //ERASE AUR CLEAR FUNCTION HAMARE VECTOR KE SIZE KO CHANGE KR SKTE HAIN PR CAPACITY CHANGE NHI KAR SKTE.


    // 4. insert

    vector<int> vec = {1, 2, 3, 4, 5};

    vec.insert(vec.begin()+2, 100); // ye function me do value pass hoti hai, jisme pehli value ham position ki dete hain jaha hame koi nayi value insert krni hai phir ham value ko bhi pass krte hain jo value uss position pe insert karni hai is function me.

     for(int i : vec){
        cout << i << " ";
    }
    cout << endl;


    // 5. clear
    vector<int> vec1 = {1, 2, 3, 4, 5};

    vec1.clear(); // ye clear kr dega hamare elements ko jo vector me present honge pr capacity uski change nhi hogi bss size change ho jaegi.

    cout << "size :" << vec1.size(); // 0
    cout << " capacity :" << vec1.capacity(); // 5
    cout << endl;

    // 6. empty 

    vector<int> vec2 = {1, 2, 3, 4, 5};

    cout << "is empty: " << vec2.empty() << endl; // yaha value 0 aaegi mtlb false aaegi kyoki hamara vector empty nhi hai.

    vec2.clear();

    cout << "is empty: " << vec2.empty() << endl; // yaha value 1 aaegi mtlb true aaegi kyoki hamare vector clear function ki help se empty ho chuka hai.


    return 0;
}