#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        int j = i + 1;
        while (j < n)
        {
            if (v[minIndex] > v[j])
                minIndex = j;
            j++;
        }
        swap(v[minIndex], v[i]);
    }
    for (auto x : v)
        cout << x << " ";
}

int main()
{
    vector<int> v = {8, 4, -1, 6, 3, 12, -9};
    selection_sort(v);

    return 0;
}