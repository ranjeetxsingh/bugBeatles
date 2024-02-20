#include<bits/stdc++.h> 
using namespace std;

void printBoard(int n, int board[][20]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool  canPlace(int board[][20], int n, int x, int y){
    // column
    for (int k = 0; k < x; k++){
        if(board[k][y] == 1)
            return false;
    }

    // left diagonal
    int i = x, j = y;
    while(i>=0 and j>=0){
        if(board[i][j] == 1)
            return false;
        i--;
        j--;
    }

    // right diagonal
    i = x;
    j = y;
    while(i>=0 and j<=n){
        if(board[i][j] == 1)
            return false;
        i--;
        j++;
    }

    return true;
}

int solveNQueen(int n, int board[][20], int i){
    // base case
    if(i == n){
        printBoard(n, board);
        cout << endl
             << endl;
        return 1;
    }

    // rec case
    // try to put a queen in every row
    int ways = 0;
    for (int j = 0; j < n; j++){
        //check whether the current i,j is safe or not
        if(canPlace(board, n, i, j)){
            board[i][j] = 1;
            ways += solveNQueen(n, board, i + 1);
            
            // backtrack
            board[i][j] = 0;
        }
    }

    return ways;
}

int main(){
    int board[20][20] = {0};
    int n;
    cin >> n;

    cout << "No. of Ways: " << solveNQueen(n, board, 0) << endl;

    return 0;
}