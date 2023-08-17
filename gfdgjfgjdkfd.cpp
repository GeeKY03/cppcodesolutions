
#include <iostream>
#include <cmath>
using namespace std;

int find_x(int A, int B, int C) {
	int low = 0, high = pow(2, 30) - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (A ^ mid < B ^ mid && B ^ mid < C ^ mid) {
			return mid;
		}
		else if (A ^ mid >= B ^ mid) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int A, B, C;
		cin >> A >> B >> C;
		int X = find_x(A, B, C);
		cout << X << endl;
	}
	return 0;
}

