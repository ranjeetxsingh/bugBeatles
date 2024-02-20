#include<vector>
#include<iostream>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    cout << "inside function" << endl;
    int n = a.size();
    for(int i=1; i<=k; i++){
        // cout << "running " << endl;
        int temp = a[n-1];
        for(int j=n-1; j>0; j--){
            // cout << "running 2" << endl;
            a[j] = a[j-1];
        }
        a[0] = temp;
    }

    // for (int i = 0; i < a.size(); i++){
    //     cout << "inside for" << endl;
    //     cout << a.at(i) << " ";
    // }
    return a;
    
}

int main(){
    vector<int> arr = {1, 3, 5, 7, 9};
    int x = 2;
    cout << "inside main" << endl;
    arr = kRotate(arr, x);

    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}