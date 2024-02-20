#include<bits/stdc++.h>
using namespace std;

string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void number_spell(long long int n){
    if(n == 0)
        return;
    number_spell(n / 10);
    int last_digit = n % 10;
    cout << spell[last_digit] <<" ";
}

int main(){
    long long int n;
    cin >> n;
    number_spell(n);

    return 0;
}