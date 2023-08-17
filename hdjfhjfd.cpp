#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	int num = t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		if (num == 1) {
			cout << "NO" << endl;
		}
		else {
			if (arr[0] == 1) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}

	}
	return 0;
}