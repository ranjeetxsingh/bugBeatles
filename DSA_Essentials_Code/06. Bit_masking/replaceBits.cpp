#include<iostream>
using namespace std;

void clearRangeOfBits(int &n, int i, int j){
    int a = ((~0) << (j + 1));
    int b = ((1 << i) - 1);
    int mask = a | b;
    n = n & mask;
}

void replace_Bits(int &n, int i, int j, int m){
    clearRangeOfBits(n, i, j);
    int mask = m << i;
    n = n|mask;
}

int main(){
    int n = 15,
        i = 1,
        j = 3,
        m = 2;

    replace_Bits(n, i, j, m);

    cout << n << endl; 

    return 0;
}