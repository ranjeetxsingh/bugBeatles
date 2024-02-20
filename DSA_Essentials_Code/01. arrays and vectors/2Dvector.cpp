#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<vector<int>> arr = {
        {1, 2, 3},
        {9, 12},
        {8, 78, 58, 96}};

    for (int i = 0; i < arr.size(); i++)
    {
        for (int number : arr[i])
        {
            cout << number << " ";
        }
        cout << endl;
    }

    return 0;
}