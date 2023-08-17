#include <iostream>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

int main() {
	// Read the number of test cases
	int t;
	cin >> t;

	// Process each test case
	while (t--) {
		// Read the size of the array and the elements
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		// Check if the array is already sorted
		bool sorted = true;
		for (int i = 1; i < n; i++) {
			if (a[i] < a[i - 1]) {
				sorted = false;
				break;
			}
		}

		if (sorted) {
			// If the array is already sorted, print any value of x between 0 and 109
			cout << 0 << endl;
		} else {
			// If the array is not sorted, check if it can be sorted by applying the operation
			int minDiff = INT_MAX;
			for (int i = 1; i < n; i++) {
				minDiff = min(minDiff, a[i] - a[i - 1]);
			}

			if (minDiff == 0) {
				// If the minimum difference between adjacent elements is 0, print -1
				cout << -1 << endl;
			} else {
				// Otherwise, find any value of x that will make the array sorted
				int x = a[0] + minDiff;
				cout << x + 1 << endl;
			}
		}
	}

	return 0;
}
