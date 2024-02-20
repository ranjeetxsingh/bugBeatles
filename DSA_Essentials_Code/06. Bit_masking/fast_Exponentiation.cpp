#include<iostream>
using namespace std;

// a^n ---> a raised to the power n
// time complexity ---> O(log N)
int fast_Expon(int a, int n){
    int ans = 1;
    int power_a = a;
    while(n>0){
        if(n&1){
            ans *= power_a;
        }
        n = n >> 1;
        power_a *= power_a;
    }

    return ans;
}

int main(){
    int a, n;
    cout << "Enter value of a: ";
    cin >> a;
    cout<<"Enter value of n: ";
    cin >> n;

    cout << fast_Expon(a, n) << endl;

    return 0;
}