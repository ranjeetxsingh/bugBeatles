#include <bits/stdc++.h>
using namespace std;


int minm(int a, int b, int c, int d){
    return min(a, min(b, min(c, d)));
}


int main()
{

    // matrix will be of order N X N
    int arr[6][6] = {{0, 1, 1, 0, 0, 0},
                 {1, 0, 0, 1, 1, 0},
                 {0, 1, 0, 0, 0, 0},
                 {0, 1, 1, 0, 0, 1},
                 {1, 0, 0, 1, 1, 0},
                 {0, 1, 0, 0, 0, 0}};

    int n = 6;

    // declaring auxillary matrix mat
    int mat[6][6] = {0};
    // calculating auxillary matrix
    // first let us calculate prefix-sum for upper-side and left-side boundary walls;

    int sum = 0;

    // calculating prefix-sum for upper-side boundary
    for (int i = 0; i < n; i++){
        sum += arr[0][i];
        mat[0][i] = sum;
    }
    sum = 0;
    //calculating prefix-sum for left side boundary
    for (int i = 0; i < n; i++){
        sum += arr[i][0];
        mat[i][0] = sum;
    }
    sum = 0;
    // now calculating prefix-sum for every element
    for (int i = 1; i < n; i++){
        for (int j = 1; j < n; j++){
            mat[i][j] = mat[i - 1][j] + mat[i][j - 1] - mat[i - 1][j - 1];
            if(arr[i][j] == 1){
                mat[i][j] += 1;
            }
        }
    }
    int maxTrees = 0;
    // cout << "auxillary matrix" << endl;
    // for(int i = 0; i<n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    //now checking for every cut whether which cut will get rahul max. no. of trees
    for (int x = 0; x < n; x++){
        for (int y = 0; y < n; y++){
            int s1 = mat[x][y];
            int s2 = mat[x][n-1] - mat[x][y];
            int s3 = mat[n-1][y] - mat[x][y];
            int s4 = mat[n-1][n-1] - (s1 + s2 + s3);
            int minPart = min(s1, min(s2, min(s3, s4)));
            // cout << minPart << " , ";
            if(minPart > maxTrees)
                maxTrees = minPart;
        }
    }

    cout << "Max. no. of trees Rahul can get is: " << maxTrees << endl;

    return 0;
}