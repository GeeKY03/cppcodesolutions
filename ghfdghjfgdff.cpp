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

class Car {
	string gearbox;
public:
	int bhp;
	int torque;

	void setGearbox(string gb) {
		gearbox = gb;
	}

	string getGearbox() {
		return gearbox;
	}

	void print() {
		cout << bhp << "HP " << torque << "NM" << endl;
		cout << gearbox << endl;
	}
};

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	Car M5;
	M5.bhp = 625;
	M5.torque = 800;
	M5.setGearbox("8 speed torque converter");

	Car M8(M5);


	M5.print();
	cout << endl;
	M8.print();
	cout << endl;

	M5.bhp = 650;
	M5.print();
	cout << endl;



	return 0;
}