#include <iostream>
using namespace std;

void update_ith_bit(int &n, int i, int v)
{
    int mask = ~(1 << i);
    n = (n & mask);
    mask = v << i;
    n = (n | mask);
}

int main()
{
    int n, i, v;
    cout << "Enter a number: ";
    cin >> n;
    cout << "enter position: ";
    cin >> i;
    cout << "enter bit value: ";
    cin >> v;

    update_ith_bit(n, i, v);
    cout << "After updating the bit, number is: " << n << endl;

    return 0;
}