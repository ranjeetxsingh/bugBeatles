#include<iostream>
using namespace std;


// BRUTE FORCE approach O(N^3) time complexity 
void LargestSubArraySum(int arr[], int n){
    int largestSum = 0, sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            for (int k = i; k <= j;k++){
                cout << arr[k] << " ";
                sum += arr[k];
            }
            largestSum = max(largestSum, sum);
            sum = 0;
            cout << endl;
        }
    }

    cout << "largest subArray Sum is: " << largestSum << endl;
}

// Prefix-sum approach
void prefixSum(int arr[], int n){
    int ps[n] = {0};
    for (int i = 1; i < n;i++){
        ps[i] = ps[i - 1] + arr[i];
    }

    int largestSum = 0, subArraySum = 0;
    for (int i = 0; i < n;i++){
        for (int j = i; j < n; j++){
            subArraySum = i>0 ? ps[j] - ps[i-1] : ps[j];
            largestSum = max(largestSum, subArraySum);
        }
    }
    cout << "Largest subArraySum is: " << largestSum << endl;
}

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

    prefixSum(arr, n);
    kadane(arr, n);

    return 0;
}