// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

// idea is suppose
// 0001111010111    i=2 j=5
// 0001111000011 result should be like this
// so we want a mask that shoud be like
// 1111111000011 mask should look this
// we can break it into two parts mask = a + b
// a will 1111110000000 like this
// b will be like 000000011111 like this
/* so creating a is easy we just need to left shift -1
   for b part it is somewhat tricky , what we will need to do is this:-
   we know 15 = 0001111
   we know 31 = 0011111 
   from here it is somewhat clear that if we want to set last i bits to 1 we need such numbers
   it is nothing but simply
   (2^i - 1) 
   for example 15 has last 4 bits as 1 so 
   2^4-1 = 16-1 = 15 we will have last 4 bits as one
*/

// i and j are range 
//we will clear bits from j-->i or j<--i 
void clearRangeOfBits(int &n, int i, int j){
    int a = (-1 << j+1);
    int b = ((1<<i) - 1);   // 1 <<i will give power of 2s
    int mask = a | b;
    n = n & mask;
}

int main(){
    int n = 91, i = 0 , j = 0 ;
    clearRangeOfBits(n, i, j);
    cout << n << endl;
}