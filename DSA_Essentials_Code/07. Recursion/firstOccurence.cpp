#include<iostream>
using namespace std;
/*
int firstOcc(int arr[], int i, int n, int key){
    
    if(arr[i] == key)
        return i;
        
    if(i == n){
        return -1;
    }
    
    return firstOcc(arr, i + 1, n, key);
}
*/
int firstOcc(int arr[], int n, int key){
    if(n == 0){
        return -1;
    }
    if(arr[0] == key){
        return 0;
    }
    int subIndex = firstOcc(arr + 1, n - 1, key);
    if(subIndex != -1){
        return subIndex + 1;
    }
    return -1;
}


int main(){
    int arr[] = {1, 2, 3, 5, 8, 9, 11, 13};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    int i = firstOcc(arr, n, key);
    if(i == -1){
        cout << "Not present " <<  endl;
    }else {
        cout << "Present at: " << i<< endl;
    }

    return 0;
}