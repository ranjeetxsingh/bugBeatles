#include<bits/stdc++.h>
#include "Queue_LL.h"
using namespace std;


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Queue myqueue;

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
	myqueue.pop();
	myqueue.push(10);

	while (!myqueue.empty()) {
		cout << myqueue.getFront() << endl;
		myqueue.pop();
	}

	return 0;
}
