#include <iostream>
using namespace std;

int lastOcc(int arr[], int i, int n, int key)
{

    if (arr[i] == key)
    {
        int index = lastOcc(arr, i+1, n, key);
        if (index != -1)
        {
            return index;
        }
        return i;
    }

    if (i == n)
    {
        return -1;
    }

    return lastOcc(arr, i + 1, n, key);
}


int lastOccTwo(int arr[], int n, int key){
    if(n == 0){
        return -1;
    }
    // rec case
    int subIndex = lastOccTwo(arr + 1, n - 1, key);
    if(subIndex == -1){
        if(arr[0] == key)
            return 0;
        else
            return -1;
    }else{
        return subIndex + 1;
    }
}


int main()
{
    int arr[] = {1, 2, 3, 5, 8, 8, 8, 9, 11, 13};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    int i = lastOccTwo(arr, n, key);
    if (i == -1)
    {
        cout << "Not present " << endl;
    }
    else
    {
        cout << "Present at: " << i << endl;
    }

    return 0;
}