#include<iostream>
using namespace std;


//this is faster than countBits method
int count_bits_hack(int n){
    int count = 0;
    while(n>0){
        // removes last set bit from the current number
        n = n & (n - 1);
        count++;
    }

    return count;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "set bits count: " << count_bits_hack(n) << endl;

    return 0;
}