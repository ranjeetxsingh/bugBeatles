#include<iostream>
using namespace std;

long long int factorial(int n){
    if(n == 0){
        return 1;
    }

    return (n * factorial(n-1));
}

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;

    cout << "Factorial is: " << factorial(n) << endl;

    return 0;
}