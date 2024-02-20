#include<iostream>
#include<algorithm>
#include<vector>
using namespace  std;

int main(){
    vector<int> v = {10, 11, 13, 8, 4, 78};

    // we will use find() to check if element is present in vector or not
    int key = 78;

    vector<int>::iterator it = find(v.begin(), v.end(), key);
    // above we created it iterator of type vector<int> which is going to store the address
    // v.begin() is a close interval while v.end() is an open interval
    // if key is present it will give us the address of the element so to find the index we will do following:-
    // we will simply subtract the address of the found element with the base address of vector and will get the index;
    // if key/element we are searching for is not present then it will have v.end() address 
    // meaning it has itearted over every element but did not find the matching element 
    // and it will contain v.end() to indicate that it is out of vectors designated size

    if(it != v.end()){
        cout << "Element Present at index: " << (it - v.begin()) << endl;
    }
    else {
        cout << "Element not Present!" << endl;
    }


    // we also have many other functions
    /* 1. search() -> it is used to search for a subsequence
       2. binary_search() 
       3. lower_bound() -> searches for first occurence of element
       4. upper_bound() -> searches for last occurence of element 
       you can learn about these functions using cplusplus.com refrence page  
    */ 
    return 0;
}