#include<iostream>
using namespace std;
#include<vector>

void counting_sort(vector<int> arr, int n){
    int count[100] = {0};
    for (int i = 0; i < n; i++){
        count[arr[i]]++;
    }
    int j = 0;
    for (int i = 0; i < 100; i++){
        while(count[i] > 0){
            arr[j] = i;
            count[i]--;
            j++;
        }
    }

    for(int x: arr){
        cout << x << " ";
    }
}

int main(){
    vector<int> arr = {5, 8, 3, 1, 1, 2, 6};
    int n = arr.size();
    counting_sort(arr, n);
}