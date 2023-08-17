#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

void MergeFunc(int *arr, int st, int end) {
	int mid = (st + end) / 2;
	int temp[100000];
	int i = st, // Points to the start of the first half
	    j = mid + 1, // Points to the start of the second half
	    k = st; // Point to the start of the temproary array

	// Now merge the arrays
	while ((i <= mid) && (j <= end)) {
		if (arr[i] < arr[j]) {
			temp[k] = arr[i];
			k++;
			i++;
		}
		else {
			temp[k] = arr[j];
			k++;
			j++;
		}
	}
	while (i <= mid) {
		temp[k] = arr[i];
		k++, i++;
	}
	while (j <= end) {
		temp[k] = arr[j];
		k++, j++;
	}

	// Now we need to copy this temp array in to our original array
	for (int i = st; i <= end; i++) {
		arr[i] = temp[i];
	}
}

void MergeSort(int arr[], int st, int end) {
	// Base Case : 0 or 1 element present, so no need to sort the array
	if (st >= end) {
		return;
	}

	// Follow 3 steps
	// 1. Divide: To divide you need a mid-point
	int mid = (st + end) / 2;

	// Recursively sort both the halves
	MergeSort(arr, st, mid);
	MergeSort(arr, mid + 1, end);

	// Merge the two parts
	MergeFunc(arr, st, end);
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	int arr[100000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	MergeSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}


	return 0;
}