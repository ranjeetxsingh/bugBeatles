/*

Next Greater Element
Given an array, return the Next Greater Element for every element. The Next greater Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider the next greater element as -1.

Input Format

In the function an integer vector is passed

Output Format

Return an integer vector containing the next greater element for each element



Sample Input

v = { 4, 5, 2, 25 }

Sample Output

{ 5, 25, 25, -1 }



*/


#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> v) {

    int n = v.size() - 1;
    vector<int> ans(n + 1, 0);
    stack<int> s;

    int currElement = v[0];
    int flag = 0;

    for (int i = 0; i <= n; i++) {
        currElement = v[0];
        for (int j = i + 1; j <= n; j++) {
            if (v[i] < v[j]) {
                s.push(v[j]);
                flag = 1;
                break;
            }
        }

        if (flag != 1) {
            s.push(-1);
        }

        flag = 0;
    }

    for (int i = n; i >= 0; i--) {
        // cout << s.top() << endl;
        ans[i] = s.top();
        s.pop();
    }



    return ans;

}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> v = {4, 5, 2, 25};

    vector<int> ans = nextGreaterElement(v);

    int n = ans.size() - 1;
    for (int i = 0; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;

}