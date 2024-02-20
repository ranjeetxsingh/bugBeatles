#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &array, int s, int e){
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;

    vector<int> temp;

    while(i<=mid and j<=e){
        if(array[i]<array[j]){
            temp.push_back(array[i]);
            i++;
        }else{
            temp.push_back(array[j]);
            j++;
        }
    }

    //copy remaining elements from first array
    while(i<=mid){
        temp.push_back(array[i++]);
    }

    // or copy remaining element from second array
    while(j<=e){
        temp.push_back(array[j++]);
    }

    // copy elements from temp array to original array
    for (int k = s, i = 0; k <= e; k++){
        array[k] = temp[i++];
    }
}

void mergeSort(vector<int> &array, int s, int e){
    // base case
    if(s>=e){
        return;
    }

    // recursive case
    int mid = (s + e) / 2;
    mergeSort(array, s, mid);
    mergeSort(array, mid + 1, e);
    return merge(array, s, e);
}

int main(){
    vector<int> arr{10, 5, 2, 0, 7, 6, 4};
    int s = 0;
    int e = arr.size() - 1;
    mergeSort(arr, s, e);

    for(auto x: arr){
        cout << x << " ";
    }

    cout << endl;

    return 0;
}

