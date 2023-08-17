#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

void HackerOrWhat()
{
	string s;
	cin >> s;
	int n = s.size();
	vc v(n);
	char mx = s[n - 1];
	for (int i = n - 1; i >= 0; i--)
	{
		v[i] = mx;
		mx = max(mx, s[i]);
	}
	int temp = 0;
	while (temp < n && s[temp] == 'E')
	{
		temp++;
	}
	bool f = 0;
	if (temp != n)
	{
		int idx = temp;
		char chaAti = s[temp];
		for (int i = temp; i < n; i++)
		{
			if (s[i] == 'E')
			{
				f = 1;
				break;
			}
			if (s[i] > chaAti)
			{
				chaAti = s[i];
				idx = i;
			}
		}
		if (f == 1)
		{
			s[idx] = 'E';
		}
	}
	if (f == 0 && temp < n)
	{
		int idx = temp;
		char chaAti = s[temp];
		while (idx < n && s[idx] != v[idx])
		{
			if (chaAti < s[idx])
			{
				chaAti = s[idx];
				temp = idx;
			}
			idx++;
		}
		s[temp] = 'E';
	}
	// int ans = 0;
	// for (int i = 0; i < n; i++)
	// {
	// 	if (s[i] < v[i])
	// 	{
	// 		if (s[i] == 'D')
	// 		{
	// 			ans -= 1000;
	// 		}
	// 		if (s[i] == 'A')
	// 		{
	// 			ans -= 1;
	// 		}
	// 		if (s[i] == 'B')
	// 		{
	// 			ans -= 10;
	// 		}
	// 		if (s[i] == 'C')
	// 		{
	// 			ans -= 100;
	// 		}
	// 	}
	else
	{
		if (s[i] == 'D')
		{
			ans += 1000;
		}
		if (s[i] == 'A')
		{
			ans += 1;
		}
		if (s[i] == 'B')
		{
			ans += 10;
		}
		if (s[i] == 'C')
		{
			ans += 100;
		}
		if (s[i] == 'E')
		{
			ans += 10000;
		}
	}
}
cout << ans << endl;
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		HackerOrWhat();
	}



	return 0;
}