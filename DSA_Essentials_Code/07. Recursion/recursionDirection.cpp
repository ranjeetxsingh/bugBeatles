#include<iostream>
using namespace std;

void decrease(int n){
    if(n == 0)
        return;
    // anything before function call are executed when we move towards the base case
    cout << n << " ";
    decrease(n - 1);
}

void increase(int n){
    if(n == 0)
        return;
    increase(n - 1);
    // anything after function call are executed when base case is executed meaning it is executed when we wre returning from base case of moving away from base case
    cout << n << " ";
}

int main(){
    int n;
    cin >> n;
    decrease(n);
    cout << endl;
    increase(n);

    return 0;
}