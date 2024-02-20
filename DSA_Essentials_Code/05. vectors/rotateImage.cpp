#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{

    int n = matrix[0].size();

    int fi = 0, fj = 0, si = 0, sj = n - 1, ti = n - 1, tj = n - 1, fti = n - 1, ftj = 0;

    int k = 0, i = n - 1;
    while (k < n / 2)
    {
        k++;
        while (fi < i)
        {
            int temp = matrix[fi][fj];
            matrix[fi][fj] = matrix[fti][ftj];
            matrix[fti][ftj] =  matrix[ti][tj];
            matrix[ti][tj] = matrix[si][sj];
            matrix[si][sj] = temp;
            fi++;
            sj--;
            ti--;
            ftj++;
        }
        i--;
        fi = k, fj = k, si = k, sj = i, ti = i, tj = i, fti = i, ftj = k;
    }
}

int main()
{

    vector<vector<int>> arr = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
        };

    rotate(arr);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
