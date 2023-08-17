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

	// to check if a number is odd

	// ll n1 = 11, n2 = 12;
	// if (n2 & 1) {
	// 	cout << "ODD" << endl;
	// }
	// else {
	// 	cout << "EVEN" << endl;
	// }

	// To find the i'th bit from right side

	// ll num = 11;
	// ll mask = 1 << 3;
	// if ((num & mask) > 0) {
	// 	cout << '1' << endl;
	// }
	// else {
	// 	cout << '0' << endl;
	// }


	// To set the i'th bit of a number
	// ll num = 11;
	// ll mask = 1 << 2;
	// cout << (num | mask) << endl;

	// To clear the i'th bit
	// ll num = 11;
	// ll mask = ~(1 << 3);
	// cout << (num & mask) << endl;


	// To update the i'th bit
	// ll num, v, i;
	// cin >> num >> v >> i;
	// // num=num;
	// // i= i'th bit
	// // v= value at i'th bit
	// if (v == 1) {
	// 	// check the value of i'th bit
	// 	ll mask = 1 << i;
	// 	if ((num & mask) > 0) {
	// 		cout << num << endl;
	// 	}
	// 	else {
	// 		cout << (num | mask) << endl;
	// 	}
	// }
	// else {
	// 	ll mask = 1 << i;
	// 	if ((num & mask) == 0) {
	// 		cout << num << endl;
	// 	}
	// 	else {
	// 		mask = ~mask;
	// 		cout << (num & mask) << endl;
	// 	}
	// }

	// To clear the last i bits
	// ll num;
	// cin >> num;
	// ll mask = -1 << 8;
	// cout << (num & mask) << endl;

	// To clear from i'th to j'th bit
	ll num;
	cin >> num;
	ll i, j;
	cin >> i >> j;
	cout << i << " " << j << endl;
	ll mask1 = (-1) << i;
	mask1 = ~mask1;
	cout << mask1 << endl;
	ll mask2 = (-1) << i + j ;
	ll fmask = (mask1 | mask2);
	cout << (num & fmask) << endl;






	return 0;
}