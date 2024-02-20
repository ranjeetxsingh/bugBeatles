#include<vector>
using namespace std;

class Heap {
	vector<int> v;

	void heapify(int i) {

		int right = 2 * i;
		int left = 2 * i + 1;
		int minIdx = i;

		if (left < v.size() and v[left] < v[minIdx]) {
			minIdx = left;
		}
		if (right < v.size() and v[right] < v[minIdx]) {
			minIdx = right;
		}

		if (minIdx != i) {
			swap(v[i], v[minIdx]);
			heapify(minIdx);
		}

	}

public:

	Heap(int default_size = 10) {
		v.reserve(default_size + 1);
		v.push_back(-1);
	}

	void push(int data) {

		// add data to end of the heap
		v.push_back(data);

		int idx = v.size() - 1;
		int parent = idx / 2;

		while (idx > 1 and v[parent] > v[idx]) {
			swap(v[parent], v[idx]);
			idx = parent;
			parent = parent / 2;
		}
	}

// return min element
	int top() {
		return v[1];
	}

// remove in element
	void pop() {
		int idx = v.size() - 1;
		swap(v[1], v[idx]);
		v.pop_back();
		heapify(1);
	}

	bool empty() {
		return v.size() == 1;
	}



};