#include<iostream>
#include<string>
using namespace std;

int main(){
    // string s = "hello world";
    // string s("hello world");
    string s; // dynamic array
    // vector<string> ... can also be taken

    getline(cin, s, '.');


    for(char ch: s){
        cout << ch << ",";
    }

    cout << "\n" << s << endl;
    return 0;
}