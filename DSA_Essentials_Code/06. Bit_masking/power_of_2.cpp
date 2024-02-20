#include<iostream>
using namespace std;

int main(){
    // checking if number is power of 2 or not
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n&(n-1)){
        cout << "Not power of 2" << endl;
    }else{
        cout << "yes it is power of 2" << endl;
    }

    return 0;
}