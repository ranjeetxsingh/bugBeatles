#include<bits/stdc++.h>
#include "stack_LL.h"
using namespace std;


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Stack<char> s;
	s.push('r');
	s.push('a');
	s.push('n');
	s.push('j');
	s.push('e');
	s.push('e');
	s.push('t');

	while (!s.isEmpty()) {
		cout << s.top() << " ";
		s.pop();
	}

	return 0;
}
