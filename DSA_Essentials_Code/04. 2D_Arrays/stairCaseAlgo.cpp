#include <bits/stdc++.h>

#include <iostream>
using namespace std;

void stairCaseSearch(int arr[][4], int r, int c, int target)
{
    // this algo is used because array is ROW and COLUMN WISE Sorted
    pair<int, int> index;
    index.first = -1;
    index.second = -1;
    int row = 0, col = c - 1;
    while (c >= 0 && row <= r)
    {
        int el = arr[row][c];
        if (el == target)
        {
            index.first = row;
            index.second = c;
            break;
        }
        else if (el > target)
        {
            c--;
        }
        else
        {
            row++;
        }
    }

    if (index.first == -1)
    {
        cout << "Element not present" << endl;
    }
    else
    {
        cout << "Element present" << endl;
    }
}

int main()
{
    int array[][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    pair<int, int> index;
    stairCaseSearch(array, 4, 4, 33);

    return 0;
}