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

class Dog {
public:
	int age;
	int weight;

	void bark() {
		cout << "Barking" << endl;
	}
};

class Pug: public Dog {
	// class derived from Dog
};

class Beagle: public Dog {
	// class derived from dog
};


int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	/*

	    Heirarichal inheritance is the process of deriving two or more classes from a parent class;

	*/





	return 0;
}