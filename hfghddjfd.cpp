#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sumOfAbsoluteDifferences(vector<int>& nums) {
	int n = nums.size();
	vector<int> arr(n);
	vector<int> indices(n);

	// Initialize the indices array with the values [0, 1, 2, ..., n-1]
	for (int i = 0; i < n; i++) {
		indices[i] = i;
	}

	// Sort the indices array based on the values in the nums array
	sort(indices.begin(), indices.end(), [&](int i, int j) { return nums[i] < nums[j]; });

	// Initialize the left and right prefix sum arrays
	vector<int> leftPrefixSum(n), rightPrefixSum(n);

	for (int i = 1; i < n; i++) {
		leftPrefixSum[i] = leftPrefixSum[i - 1] + i * (nums[indices[i]] - nums[indices[i - 1]]);
	}

	for (int i = n - 2; i >= 0; i--) {
		rightPrefixSum[i] = rightPrefixSum[i + 1] + (n - 1 - i) * (nums[indices[i + 1]] - nums[indices[i]]);
	}

	// Calculate the result array by combining the left and right prefix sum arrays
	for (int i = 0; i < n; i++) {
		arr[indices[i]] = leftPrefixSum[i] + rightPrefixSum[i];
	}

	return arr;
}
