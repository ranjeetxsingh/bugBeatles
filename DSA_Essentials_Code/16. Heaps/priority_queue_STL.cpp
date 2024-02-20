#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {10, 15, 20, 13, 6, 90};
	int n = sizeof(arr) / sizeof(int);

	// priority_queue<int> heap;	// maxHeap declaration

	// for minHeap below declaration is required
	priority_queue<int, vector<int>, greater<int> > heap;

	for (int x : arr) {
		heap.push(x);
	}

	while (!heap.empty()) {
		cout << heap.top() << endl;
		heap.pop();
	}

	return 0;
}
