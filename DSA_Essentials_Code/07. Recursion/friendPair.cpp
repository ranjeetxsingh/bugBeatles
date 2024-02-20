#include<iostream>
using namespace std;

int possibleWays(int n){
    // base case
    if(n == 0 || n == 1){
        return 1;
    }

    int f1 = possibleWays(n - 1);
    int f2 = (n - 1) * possibleWays(n - 2);

    return f1 + f2;
}

int main(){
    int n;
    cin >> n;
    cout << "Possible ways: " << possibleWays(n) << endl;

    return 0;
}