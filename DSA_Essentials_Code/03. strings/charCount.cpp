#include<iostream>
using namespace std;

int main(){
    int alpha = 0, digits = 0, space = 0, spl_char = 0;
    char ch = cin.get();
    while(ch!='\n'){
        if(ch>='0' && ch<='9')
            digits++;
        else if((ch>='a' && ch<= 'z') || (ch>='A' && ch<='Z'))
            alpha++;
        else if(ch==' ')
            space++;
        else
            spl_char++;

        ch = cin.get();
    }

    cout << "the number of alphabets are: " << alpha << endl;
    cout << "the number of digits are: " << digits << endl;
    cout << "the number of spaces are: " << space << endl;
    cout << "the number of special characters are: " << spl_char << endl;

    return 0;
}