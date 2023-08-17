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

class car {
private:
	string gearbox;
public:
	int bhp;
	int torque;

	// IMP Note: The user defined constructors replace the constructor created by
	// default, i.e. a user defined simple constructor replaces the default simple constructor
	// similarly a user defined copy constructor replaces the default copy constructor

	// Default contstructor
	// car() {
	// 	cout << "Default constructor called" << endl;
	// }

	// // parameterized constructor
	// car(int bhp, int torque, string gearbox) {
	// 	cout << "Parameterized constructor called" << endl;
	// 	this->bhp = bhp;
	// 	this->torque = torque;
	// 	this->gearbox = gearbox;
	// }

	// car(car &gaadi) {
	// 	cout << "Copy constructor called" << endl;
	// 	this->bhp = gaadi.bhp;
	// 	this->torque = gaadi.torque;
	// 	this->gearbox = gaadi.gearbox;
	// }

	// getter function
	void setGearbox(string s) {
		gearbox = s;
	}

	// setter function
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


	// static allocation
	car RS6P;
	RS6P.bhp = 630;
	RS6P.torque = 850;
	RS6P.setGearbox("8 speed Torque converter");
	// cout << RS6P.getGearbox() << endl;

	// static allocation
	car R8;
	R8.bhp = 620;
	R8.torque = 580;
	R8.setGearbox("8 speed dual clutch transmission");

	// cout << R8.bhp << " BHP" << endl;
	// cout << R8.torque << " NM" << endl;

	// Dynamic allocation
	car *Divo = new car;
	// Setting value of a dynamic variable
	(*Divo).bhp = 1500;
	(*Divo).torque = 1600;
	Divo->setGearbox("7 speed dual clutch automatic");

	// cout << (*Divo).bhp << endl;
	// cout << Divo->torque << endl;
	// cout << Divo->getGearbox() << endl;

	// Using parametrized constructor
	// car M5(625, 800, "8 speed torque converter");
	// cout << M5.bhp << endl;
	// cout << M5.torque << endl;
	// cout << M5.getGearbox() << endl;

	// copy constructor:Also created by default on declaration of an object
	car Chiron = *Divo;
	// cout << Chiron.bhp << endl;
	// cout << Chiron.torque << endl;
	// cout << Chiron.getGearbox() << endl;

	R8.print();
	cout << endl;

	R8 = *Divo;
	(*Divo).print();
	cout << endl;
	R8.print();





	return 0;
}