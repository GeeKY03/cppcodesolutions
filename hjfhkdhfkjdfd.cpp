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
	string s1, s2;
	cin >> s1 >> s2;
	int arr1[26] = {0};
	int arr2[26] = {0};
	for (int i = 0; i < s1.size(); i++) {
		arr1[s1[i] - 48]++;
	}
	for (int i = 0; i < s1.size(); i++) {
		arr2[s1[i] - 48]++;
	}



	return 0;
}