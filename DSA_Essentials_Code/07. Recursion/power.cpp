#include<iostream>
using namespace std;

int power(int a, int n){
    if(n == 0)
        return 1;
    return a * power(a, n - 1);
}

int fastPower(int a, int n){
    if(n == 0)
        return 1;
    int subProblem = fastPower(a , n / 2);
    int subProblemSquare = subProblem * subProblem;
    if(n&1){
        return a * subProblemSquare;
    }
    return subProblemSquare;
}


int main(){
    cout << "Enter two number" << endl;
    int a,n;
    cin >> a;
    cin >> n;
    cout << "Result: " << fastPower(a, n) << endl;

    return 0;
}