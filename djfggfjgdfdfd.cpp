#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

void printstr(char *arr, vector<char> &v, ll n) {
	if (n == 0) {
		for (auto x : v) {
			cout << x << "";
		}
		cout << endl;
		return;
	}
	if (arr[0] == '1') {
		printstr(arr + 1, v, n - 1);
	}
	else if (arr[0] == '2') {
		v.pb('A');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('B');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('C');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
	}
	else if (arr[0] == '3') {
		v.pb('D');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('E');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('F');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
	}
	else if (arr[0] == '4') {
		v.pb('G');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('H');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('I');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
	}
	else if (arr[0] == '5') {
		v.pb('J');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('K');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('L');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
	}
	else if (arr[0] == '6') {
		v.pb('M');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('N');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('O');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
	}
	else if (arr[0] == '7') {
		v.pb('P');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('Q');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('R');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('S');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
	}
	else if (arr[0] == '8') {
		v.pb('T');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('U');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('V');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
	}
	else {
		v.pb('W');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('X');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('Y');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
		v.pb('Z');
		printstr(arr + 1, v, n - 1);
		v.pop_back();
	}
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll num;
	cin >> num;
	string s = to_string(num);
	ll n = s.size();
	char arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = s[i];
	}
	vector<char> v;
	printstr(arr, v, n);


	return 0;
}