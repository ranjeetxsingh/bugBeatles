#include<iostream>
using namespace std;


// kadane's algorithm
void kadane(int arr[], int n){
    int currentSum = 0, maximumSum = 0;
    for (int i = 0; i < n; i++){
        currentSum += arr[i];
        if(currentSum < 0)
            currentSum = 0;
        maximumSum = max(currentSum, maximumSum);
    }
    cout << "Largest Subarray sum is: " << maximumSum << endl;
}


int main(){
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    kadane(arr, n);

    return 0;
}