#include<iostream>
#include<vector>
using namespace std;
int main(){
    // demo vector
    // vector<int> arr = {1, 2, 4, 8, 13};

    // initializing a vector with the same number or simply called FILL CONSTRUCTOR
    vector<int> arr(10, 1);

    //remove the element from the back
    arr.pop_back();
    // PUSH_BACK O(1)
    arr.push_back(16);

    // PRINT ALL THE ELEMENTS OF VECTOR
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << endl;

        // size of the vector
        //  cout << arr.size() << endl;

        // capacity of the vector
        // cout << arr.capacity() << endl;

        return 0;
}