#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long removeCost, addCost;
    cin >> n >> removeCost >> addCost;

    long long arr[n];
    unordered_set<long long> set;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        set.insert(arr[i]);
    }

    long long minCost = n * removeCost + addCost, contains = 0;

    for (long long i = 1; i <= n; i++) {
        if (set.count(i)) {
            contains++;
        }
        long long cost = (n - contains) * removeCost + (i - contains) * addCost;
        minCost = min(minCost, cost);
    }

    sort(arr, arr + n);
    set.clear();

    for (int i = 0; i < n; i++) {
        set.insert(arr[i]);
        long long cost = (n - set.size()) * removeCost + (arr[i] - set.size()) * addCost;
        minCost = min(minCost, cost);
    }

    cout << minCost << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}