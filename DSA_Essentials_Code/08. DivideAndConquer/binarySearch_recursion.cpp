#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> v, int s, int e, int x){
    int mid = (s+e)/2;
    if(s>e){
        return -1;
    }
    if(v[mid] == x){
        return mid;
    }
    else if(v[mid] > x){
        return helper(v, s, mid-1, x);
    }else{
        return helper(v, mid+1, e, x);
    }
}
  
int binarySearch(vector<int> v, int x)
{
    return helper(v, 0, v.size() - 1, x);
}

int main(){
    vector<int> arr{2, 4, 8, 9, 13, 18, 20, 21, 24, 29};
    int s = 0;
    int e = arr.size() - 1;
    int n;
    cin >> n;
    int i = binarySearch(arr, n);
    if(i == -1)
        cout << "Element not present";
    else
        cout << "element presentat index: " << i << endl;
    

    return 0;
}