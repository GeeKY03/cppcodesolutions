#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Merging two sorted arrays
	vi a = {1, 5, 7, 12, 45};
	vi b = {2, 5, 8, 11, 42};
	int ptr1 = 0, ptr2 = 0;
	int n = 5;
	vi v;
	// merging the two arrays
	while (v.size() < 2 * n) {
		if ((ptr1 == n) && (ptr2 < n)) {
			for (int i = ptr2; i < n; i++) {
				v.pb(b[ptr2]);
			}
		}
		else if ((ptr2 == n) && (ptr1 < n)) {
			for (int i = ptr1; i < n; i++) {
				v.pb(a[ptr1]);
			}
		}
		else if (a[ptr1] > b[ptr2]) {
			v.pb(b[ptr2]);
			ptr2++;
		}
		else if (a[ptr1] == b[ptr2]) {
			v.pb(a[ptr1]);
			v.pb(b[ptr2]);
			ptr1++;
			ptr2++;
		}
		else if (a[ptr1] < b[ptr2]) {
			v.pb(a[ptr1]);
			ptr1++;
		}

	}
	for (auto x : v) {
		cout << x << " ";
	}





	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}