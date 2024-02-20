#include<iostream>
using namespace std;

// void bubble_sort(int arr[], int n){
//     if(n==1)
//         return;
//     for (int j = 0; j < n - 1; j++){
//         if(arr[j] > arr[j+1])
//             swap(arr[j], arr[j + 1]);
//     }

//     bubble_sort(arr, n-1);
// }

void bubble_sort2(int arr[], int n, int j){
    if(n==1)
        return;
    
    if(j == n-1){
        bubble_sort2(arr, n - 1, 0);
        return;
    }
    
    if(arr[j] > arr[j+1])
        swap(arr[j], arr[j + 1]);

    bubble_sort2(arr, n , j + 1);
}

int main(){
    int arr[] = {8, 5, 78, 12, 1, 6};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort2(arr, n, 0);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}