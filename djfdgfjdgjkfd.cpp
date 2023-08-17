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
	int arr[6];
	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < 5; i++) {
		cout << arr[0]*arr[i] << endl;
	}


	return 0;
}