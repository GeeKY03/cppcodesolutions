#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;


int beautiful(vector<long int> a) {
	bool found = false; // Flag to indicate if elements not in non-descending order have been found

	// Find the first occurrence of elements not in non-descending order
	for (int i = 0; i < a.size() - 1; i++) {
		if (a[i] > a[i + 1]) {
			if (found) {
				return 0; // More than one occurrence found, return 0 immediately
			}
			found = true; // Set the flag to true when the first occurrence is found
		}
	}

	// Check if the array is beautiful based on the flag 'found'
	if (found) {
		// Check if the array can be sorted in non-descending order
		if (a[0] < a[a.size() - 1]) {
			return 0; // Array cannot be made beautiful, return 0
		}
	}
	return 1; // Array is beautiful
}




int main() {
	long int t, ct = 0;
	cin >> t;
	while (ct < t) {
		long int q;
		cin >> q;
		vector<long int> a, o;
		for (int i = 0; i < q; i++) {
			long int x;
			cin >> x;
			if (i == 0) {
				a.push_back(x);
				o.push_back(1);
			}
			else {
				a.push_back(x);
				if (beautiful(a) == 1) {
					o.push_back(1);
				}
				else {
					a.pop_back();
					o.push_back(0);
				}
			}
		}
		for (int i = 0; i < q; i++) {
			cout << o[i];
		}
		cout << "\n";
		ct++;
	}
}



#include <iostream>
#include <vector>
using namespace std;

bool isBeautiful(const vector<long int>& a) {
	int n = a.size();
	int numDecreasing = 0;

	// Count the number of decreasing segments
	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]) {
			numDecreasing++;
			if (numDecreasing > 1) {
				return false; // More than one decreasing segment, array is not beautiful
			}
		}
	}

	// Check if the array can be made beautiful by sorting in non-descending order
	if (numDecreasing == 1 && a[0] < a[n - 1]) {
		return false; // Array cannot be made beautiful, it violates the condition
	}

	return true; // Array is beautiful
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		int q;
		cin >> q;

		vector<long int> a;
		vector<int> output;

		for (int i = 0; i < q; i++) {
			long int x;
			cin >> x;

			a.push_back(x);

			if (isBeautiful(a)) {
				output.push_back(1);
			} else {
				a.pop_back();
				output.push_back(0);
			}
		}

		for (int i = 0; i < q; i++) {
			cout << output[i];
		}
		cout << endl;
	}

	return 0;
}