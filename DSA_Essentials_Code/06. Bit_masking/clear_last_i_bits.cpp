#include<iostream>
using namespace std;

// will clear last i bits 
void clearBits(int &n, int i){
    int mask = ((~0) << i);
    n = n & mask;
}

int main(){
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter number of bits you want to clear from last: ";
    cin >> i;

    clearBits(n, i);

    cout << "Number after clearing bits is: " << n << endl;
}