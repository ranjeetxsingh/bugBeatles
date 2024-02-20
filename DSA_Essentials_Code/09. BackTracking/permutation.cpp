#include<bits/stdc++.h>
using namespace std;

void findPermutation(char *input, char *output, int i, int j){
    if(input[i] == '\0'){
        output[j] = '\0';
        cout << output << endl;
        return;
    }

    output[j] = input[i];
    swap(input[i], input[j]);
    findPermutation(input, output, i + 1, j + 1);
    swap(input[i], output[j]);
    // findPermutation(input, output, i + 1, j);
}

int main(){
    char input[100];
    cin >> input;
    char output[100];
    findPermutation(input, output, 0, 0);

    cout << "end" << endl;
    return 0;
}