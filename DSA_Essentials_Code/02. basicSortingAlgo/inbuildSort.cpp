#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main(){
    int arr[] = {12, 4, 7, 1, -9, 3, 6, -4, 0};
    int n = sizeof(arr) / sizeof(int);

    // sorting with sort function
    sort(arr, arr + n, compare); // using comparators

    // displaying sorted array
    // cout << "non-decreasing sorted array" << endl;
    for(auto x: arr)
        cout << x << " ";
    
    //reversing the sorted array so as to create decreasing order array
    // reverse(arr, arr + n);

    // displaying reverse array or decreasing array
    // cout << "\ndecreasing order array" << endl;
    // for(auto x: arr)
    //     cout << x << " ";

    return 0;
}