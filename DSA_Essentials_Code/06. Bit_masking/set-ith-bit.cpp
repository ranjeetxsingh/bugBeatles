#include <iostream>
using namespace std;

void set_ith_bit(int &n, int i)
{
    int mask = (1 << i);
    n = (n | mask);
}

int main()
{
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    cout << "enter position: ";
    cin >> i;

    set_ith_bit(n, i);
    cout << "After setting number is: " << n << endl;

    return 0;
}