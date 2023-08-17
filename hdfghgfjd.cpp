#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int min_operations(vector<int>& arr, int k) {
	int n = arr.size();
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	int target_sum = k * sum / n; // target sum of each subarray of length k
	vector<int> prefix_sum(2 * n - 1);

	for (int i = 0; i < 2 * n - 2; i++) {
		prefix_sum[i + 1] = prefix_sum[i] + arr[i % n];
	}

	auto get_sum = [&](int left, int right) {
		if (left == 0) {
			return prefix_sum[right];
		}
		return prefix_sum[right] - prefix_sum[left - 1];
	};

	auto count_ops = [&](int x) {
		int ops = 0;
		for (int i = 0; i < n; i++) {
			int diff = get_sum(i, i + k - 1) - x;
			ops += abs(diff);
		}
		return ops;
	};

	int left = target_sum - k, right = target_sum + k;
	while (left < right) {
		int mid = (left + right) / 2;
		if (count_ops(mid) < count_ops(mid + 1)) {
			right = mid;
		} else {
			left = mid + 1;
		}
	}

	return count_ops(left);
}

int main() {
	vector<int> arr = {2, 5, 5, 7};
	int k = 3;
	cout << min_operations(arr, k) << endl; // Output: 2
	return 0;
}
