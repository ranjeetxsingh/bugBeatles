#include<iostream>
using namespace std;

int get_ith_bit(int n, int i){
    int mask = (1 << i);

    return ( (mask&n)>0 ? 1 : 0) ;
}

int main(){
    int n = 7;
    int i;
    cin >> i;

    cout << get_ith_bit(n, i) << endl;

    return 0;
}