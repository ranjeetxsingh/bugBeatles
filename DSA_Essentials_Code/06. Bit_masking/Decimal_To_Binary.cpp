#include<iostream>
using namespace std;


// can produce binary equivalents of numbers ranging from 0 to 524287 (inclusive)
long long int covertToBinary(int n){
    long long  int add = 0;
    long long int powerOfTen = 1;
    while(n>0){
        if(n&1){
            add += powerOfTen;
        }
        n = n >> 1;
        powerOfTen *= 10;
    }

    return add;
}

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;

    cout << "Binary equivalent of number is: " << covertToBinary(n) << endl;

    return 0;
}