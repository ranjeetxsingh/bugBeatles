/*
Write a class StockSpanner which collects daily price quotes for some stock, and returns the span of that stock's price for the current day.

The span of the stock's price today is defined as the maximum number of consecutive days (starting from today and going backwards) for which the price of the stock was less than or equal to today's price.

For example, if the price of a stock over the next 7 days were [100, 80, 60, 70, 60, 75, 85], then the stock spans would be [1, 1, 1, 2, 1, 4, 6].
*/

//Expected Time Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> stockSpanner(vector<int> &a) {
	stack <int> s;
	int n = a.size();
	s.push(0);
	vector<int> arr(n, 1);
	for (int i = 1; i < n; i++) {
		while (!s.empty() and a[s.top()] <= a[i]) {
			s.pop();
		}
		if (!s.empty()) {
			arr[i] = i - s.top();
		} else arr[i] = i + 1;
		s.push(i);
	}
	return arr;
}