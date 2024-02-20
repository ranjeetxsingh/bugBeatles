#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> printPascal(int n)
{
    vector<vector <int> > sol;
    int row = 0, col = 0;
    for(row = 0; row<n; row++){
        vector<int> v;
        col = 0;
        while(col<=row){
            if(col == 0 || col == row){
                v.push_back(1);
            }else{
                int sum = sol[row-1][col-1] + sol[row-1][col];
                v.push_back(sum);
            }
            col++;
        }
        sol.push_back(v);
    }

    return sol;
    
}

int main(){
    vector<vector<int>> ans;
    ans = printPascal(5);
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}




