#include<iostream>
using namespace std;

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

int main(){
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    prefixSum(arr, n);
    return 0;
}