#include<iostream>
using namespace std;

void spiral(int arr[][10], int n, int m){
    int rowStart = 0, rowEnd = n - 1, colStart = 0, colEnd = m - 1;
    
    while((rowStart <= rowEnd) && (colStart <= rowEnd)){

        //start row
        for (int col = colStart; col <= colEnd; col++){
            cout << arr[rowStart][col] <<" ";
        }

        //end col
        for (int row = rowStart + 1; row <= rowEnd; row++){
            cout << arr[row][colEnd] <<" ";
        }

        //end row
        for (int col = colEnd - 1; col >= colStart; col--){
            if(rowStart == rowEnd)
                break;
            cout << arr[rowEnd][col] << " ";
        }

        //start col
        for (int row = rowEnd - 1; row >= rowStart + 1; row--){
            if(colStart == colEnd)
                break;
            cout << arr[row][colStart] << " ";
        }

        colStart++;
        rowStart++;
        colEnd--;
        rowEnd--;
    }

}


int main(){
    int arr[][10] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    spiral(arr, 3, 5);
}