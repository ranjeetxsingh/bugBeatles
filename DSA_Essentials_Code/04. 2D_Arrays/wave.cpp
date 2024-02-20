#include<bits/stdc++.h>
using namespace std;
 
 vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    // m is no. of rows
    // n is no. of columns
    int col = n - 1;
    int row = m - 1;
    int currentRow = 0;
    vector<int> output;

    while(col >=0 ){
        if(currentRow == 0){
            while(currentRow <= row){
                output.push_back(arr[currentRow][col]);
                currentRow++;
            }
        }else{
            currentRow = row;
            while(currentRow >= 0){
                output.push_back(arr[currentRow][col]);
                currentRow--;
            }
            currentRow = 0;
        }
        col--;
    }

    return output;
}

int main(){
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    vector<int> ans = WavePrint(4, 4, arr);

    for(auto x: ans){
        cout << x << " ";
    }

    return 0;
}
