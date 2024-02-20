#include <bits/stdc++.h>
using namespace std;

int parition(vector<int> &array, int s, int e)
{
    int i = s - 1, pivot = array[e];
    for (int j = s; j < e; j++){
        if(array[j]<pivot){
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[e]);

    return i+1;
}

void quicksort(vector<int> &array, int s, int e){
    if(s>=e){
        return;
    }

    int p = parition(array, s, e);

    quicksort(array, s, p-1);
    quicksort(array, p + 1, e);
}

int main(){
    vector<int> arr{10, 5, 2, 0, 7, 6, 4};
    int s = 0;
    int e = arr.size() - 1;
    quicksort(arr, s, e);

    for(auto x: arr){
        cout << x << " ";
    }

    cout << endl;

    return 0;
}