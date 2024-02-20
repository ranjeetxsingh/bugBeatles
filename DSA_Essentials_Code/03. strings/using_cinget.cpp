#include<iostream>
using namespace std;

int main(){
    // char temp = cin.get();

    // int len = 1;
    // while(temp != '\n'){
    //     len++;
    //     cout << temp;
    //     temp = cin.get();
    // }
    // cout << "\nlength is: " << len << endl;

    char sentence[1000];
    int len = 0;
    char temp = cin.get();
    
    while(temp!='\n'){
        sentence[len++] = temp;
        temp = cin.get();
    }
    sentence[len] == '\0';

    cout << sentence << endl;
    cout << "lentgh of the string is: " << len << endl;

    return 0;
}