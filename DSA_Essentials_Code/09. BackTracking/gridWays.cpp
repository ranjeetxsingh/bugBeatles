#include<bits/stdc++.h>
using namespace std;

int gridWays(int i, int j, int m, int n){
    if(i == m - 1 and j == n - 1){
        return 1;
    }

    if(i >= m or j >= n){
        return 0;
    }


    int ans = gridWays(i + 1, j, m, n) + gridWays(i, j + 1, m, n);
    return ans;
}

long long int factorial(int n){
    if(n == 0){
        return 1;
    }

    return (n * factorial(n-1));
}

long long int gridWays_Math(int m, int n){
    // we need to move m-1 in right direction and n-1 left direction
    // so we will simply calculate in how many ways we can arrange left and right directions
    // which will be simply     (m-1 + n-1)! / ( (m-1)! (n-1)! )

    long long int ans = factorial(m + n - 2) / (factorial(m - 1) * factorial(n - 1));

    return ans;
}

int main(){
    int m, n;
    cin >> m >> n;

    cout << "No. of ways: " << gridWays(0, 0, m, n);

    return 0;
}
