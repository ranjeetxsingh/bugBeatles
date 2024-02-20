#include<iostream>
#include "vector.h"
using namespace std;



int main(){

    // Vector v(5);
    Vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.pop_back();
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.at(2) << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " , ";
    }
    cout << endl;
    Vector<char> vc;
    vc.push_back('a');
    vc.push_back('b');
    vc.push_back('d');

    for (int i = 0; i < vc.size(); i++){
        cout << vc[i] << " ";
    }

        return 0;
}