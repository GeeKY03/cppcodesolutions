#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  if (k - 1 >= n - k + 1) {
    vector<int> aa(nums.begin(), nums.begin() + k - 1);
    aa.insert(aa.end(), nums.begin() + n - k + 2, nums.end());
    // sort(aa.begin(), aa.end());
    // copy(aa.begin(), aa.begin() + k - 1, nums.begin());
    // copy(aa.begin() + k - 1, aa.end(), nums.begin() + n - k + 2);
    for (int i = 0; i < n; i++) {
      cout << nums[i] << " ";
    }
    cout << endl;
  } else {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
      cout << nums[i] << " ";
    }
    cout << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}