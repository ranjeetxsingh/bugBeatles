#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length()){
        return a < b; // lexicographic
    }
    return a.length() < b.length(); // lentgh-wise
}

void findSubsets(char *input, char *output, int i, int j, vector<string> &list){
// base case
if(input[i] == '\0'){
    output[j] = '\0';
    string temp(output);
    list.push_back(temp);
    return;
}
//recursive case 
// include ith letter
output[j] = input[i];
findSubsets(input, output, i + 1, j + 1, list);

// exclude ith letter
// over-writing
// output[j] = input[i]; // optional step
findSubsets(input, output, i + 1, j, list);

}

int main(){
    char input[100];
    char output[100];

    vector<string> list;
    cin >> input;

    

    findSubsets(input, output, 0, 0, list);
    sort(list.begin(), list.end(), compare);

    for(auto x: list)
        cout << x << endl;

    return 0;
}