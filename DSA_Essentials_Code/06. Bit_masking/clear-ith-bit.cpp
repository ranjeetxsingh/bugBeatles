#include<iostream>
using namespace std;

void clear_ith_bit(int &n, int i){
    int mask = ~(1 << i);
    n = (n&mask);
}

int main(){
    int n, i;
    cout << "Enter a number: ";
    cin >> n; 
    cout << "enter position: ";
    cin >> i;

    clear_ith_bit(n, i);
    cout << "After clearing the bit number is: " << n << endl;

    return 0;
}