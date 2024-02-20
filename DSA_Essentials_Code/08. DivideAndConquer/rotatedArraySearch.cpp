#include<bits/stdc++.h>
using namespace std;


int rotated_search(vector<int> v, int key){
    int n = v.size();

    int s = 0;
    int e = n - 1;

    while(s<=e){
        int mid = (s + e) / 2;

        if(v[mid] == key){
            return mid;
        }
        //2 cases
        if(v[s] <= v[mid]){
            // left side of pivot --> i.e. line 1
            if(key>=v[s] and key<=v[mid]){
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }else{
            // right side of pivot --> i.e. line 2
            if(key>=v[mid] and key<=v[e]){
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }
    }

    return -1;
}

int main(){
    vector<int> a{4, 5, 6, 7, 0, 1, 2, 3};
    int n;
    cin >> n;
    cout << rotated_search(a, n) << endl;
    return 0;
}