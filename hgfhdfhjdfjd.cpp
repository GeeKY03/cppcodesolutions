#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
	    int t;
	    cin >> t;
	while (t--) {
		        int n;
		        cin >> n;
		        vector<int> a(n);
		        for (auto& x : a)
			            cin >> x;

		        if (a.back()) {
			            cout << "NO" << endl;
			            continue;
			       
		}
		        cout << "YES" << endl;
		        vector<int> ans;
		        int rev = 0;
		        for (int i = n - 1; i >= 0; --i) {
			            if (!i || a[i - 1] ^ rev) {
				                ans.push_back(i);
				           
			} else {
				                ans.push_back(i - 1);
				           
			}
			            rev ^= 1;
			       
		}
		        reverse(ans.begin(), ans.end());
		        for (auto x : ans)
			            printf("%d ", x);
		        puts("");
		   
	}

	    return 0;
}