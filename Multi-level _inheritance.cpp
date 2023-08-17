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

class Animal {
public:
	int age;
	int weight;

	void speak() {
		cout << "speaking" << endl;
	}
};

class Dog: public Animal {
	// Single level inhertance
};

class Pug: public Dog {
	// Multilevel inheritance
};

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	/*

	    Multilevel inheritance is the process of deriving a class from another derived class.

	*/



	return 0;
}