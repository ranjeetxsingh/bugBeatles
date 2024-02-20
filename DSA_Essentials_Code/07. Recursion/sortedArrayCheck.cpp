#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    if(n == 1 or n == 0){
        return true;
    }
    if(arr[0]<arr[1] and isSorted(arr+1, n-1)){
        return true;
    }
    return false;
}

bool isSortedArray(int arr[], int i, int n){
    if(i == n-1 ){
        return true;
    }
    if (arr[i] < arr[i + 1] and isSortedArray(arr, i + 1, n)){
        return true;
    }

    return false;
}

int main(){
    int arr[] = {1, 2, 3, 7, 6};
    int n = sizeof(arr) / sizeof(int);
    // if(isSorted(arr, n))
    //     cout << "Array is sorted";
    // else
    //     cout << "Array is not sorted";

    // cout << isSortedArray(arr, 0, n) << endl;

    if(isSortedArray(arr, 0, n))
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";


    return 0;
}