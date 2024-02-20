#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int calcTotalMarks(vector<int> v){
    return v[0] + v[1] + v[2];
}

bool compare(pair<string, vector<int>> s1, pair<string, vector<int>> s2){
    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;
    return calcTotalMarks(m1) > calcTotalMarks(m2);
}


int main(){
    vector<pair<string, vector<int>>> students_mark = {
        {"Rohan", {10, 20, 11}},
        {"Prateek", {10, 21, 3}},
        {"Vivek", {4, 5, 6}},
        {"Rijul", {10, 13, 20}}
    };

    sort(students_mark.begin(), students_mark.end(), compare);

    for(auto s: students_mark){
        cout << s.first << " " << calcTotalMarks(s.second) << endl;
    }

    return 0;
}