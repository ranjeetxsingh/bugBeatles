#include<iostream>
using namespace std;

int count_bits(int n){
    int count = 0;
    while(n>0){
        int lastBit = n & 1;
        count += lastBit;
        n = n >> 1;
    }

    return count;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "set bits count: " << count_bits(n) << endl;

    return 0;
}