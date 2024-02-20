#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int> arr, int n){
    for (int i = 1; i < n; i++){
        int current = arr[i];
        int prev = i - 1;
        while(prev>=0 && arr[prev]>current){
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }

        arr[prev + 1] = current;
    }

    for(auto x : arr){
        cout << x << " ";
    }
}

int main(){
    vector<int> v = {5, 7, 1, 3, 6, 4};
    insertion_sort(v, 6);
    return 0;
}