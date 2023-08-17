#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	vi v = {4, 3, 4, 4};
	ll l = 3;
	ll ctr = 0;
	for (int i = 0; i < 4; i++) {
		if (v[i] > l) {
			for (int j = i; j < 4; j++) {
				if (v[j] < l) {
					ctr++;
					i = j;
					break;
				}
				else {
					cout << v[j] << " ";

				}
				cout << endl;
				if (j == 3) {
					i = j;
				}
			}
		}
	}



	return 0;
}