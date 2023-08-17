#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

void canBeMadeEqual()
{
	// Input number of strings and maximum number of operations allowed
	int n, k;
	cin >> n >> k;

	// Input the first set of strings and count the frequency of each character
	vector<string> firstSet(n);
	vector<int> firstSetCharFreq(10, 0);
	vector<string> secondSet(n);
	vector<int> secondSetCharFreq(10, 0);
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		firstSet[i] = s;
		for (auto it : s)
		{
			firstSetCharFreq[it - '0']++;
		}
	}

	// Input the second set of strings and count the frequency of each character
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		secondSet[i] = s;
		for (auto it : s)
		{
			secondSetCharFreq[it - '0']++;
		}
	}

	// Check if lengths of all strings in both sets are equal
	for (int i = 0; i < n; i++)
	{
		if (firstSet[i].size() != secondSet[i].size())
		{
			cout << "NO" << endl;
			return;
		}
	}

	// Count the number of character replacements needed to make both sets of strings equal
	int toBeReplaced = 0, toBeAdded = 0;
	for (int i = 0; i < 10; i++)
	{
		if (firstSetCharFreq[i] == secondSetCharFreq[i])
			continue;
		else if (firstSetCharFreq[i] < secondSetCharFreq[i])
		{
			toBeReplaced += (secondSetCharFreq[i] - firstSetCharFreq[i]);
		}
		else
		{
			toBeAdded += abs(secondSetCharFreq[i] - firstSetCharFreq[i]);
		}
	}

	// Check if the number of replacements needed is equal to the number of additions allowed
	if (toBeReplaced != toBeAdded)
	{
		cout << "NO" << endl;
		return;
	}

	// Check if the number of replacements needed is less than or equal to the number of additions allowed
	if (toBeReplaced <= k)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		canBeMadeEqual();
	}


	return 0;
}