#include<bits/stdc++.h>
#include "Queue.h"
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Queue myqueue(7);

	myqueue.push(1);
	myqueue.push(2);
	myqueue.push(3);
	myqueue.push(4);
	myqueue.push(5);
	myqueue.push(6);
	myqueue.push(7);
	myqueue.push(8);
	myqueue.pop();
	myqueue.pop();
	myqueue.push(9);

	while (!myqueue.empty()) {
		cout << myqueue.getFront() << endl;
		myqueue.pop();
	}



	return 0;
}
