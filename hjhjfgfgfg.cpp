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
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll arr[100000];
	ll n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		arr[x]++;
	}
	for (int i = 0; i < 100000; i++) {
		if (arr[i] == 1) {
			cout << i << endl;
			break;
		}
	}




	return 0;
}