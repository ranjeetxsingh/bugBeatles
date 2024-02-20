#include<bits/stdc++.h>
#include "stack_vector.h"
using namespace std;


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(9);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}


	return 0;
}
