/*

Q What is the minnimum number of people that should be present in a hall
  so that there is 50% chance of *2 people* having same birthday?

*/

// Soln: finding the preobablitiy of given condition is equivalent to
// to finding a condition where no 2 people have same birtday and
// then taking its complement.
// i.e. let the required probablity be p, then we are calulating x such
// that x = 1-p.

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
	float a = 365;
	float b = 365;
	float ans = 1;
	ll ctr = 0;
	while (ans > 0.5) {
		ans *= (a / b);
		a--;
		ctr++;
	}
	cout << ctr << endl;


	return 0;
}