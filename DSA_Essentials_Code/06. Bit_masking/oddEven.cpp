#include<iostream>
using namespace std;

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;
    if(n&1){
        cout << "It is odd number" << endl;
    }else{
        cout << "It is even number" << endl;
    }

    return 0;
}