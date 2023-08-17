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

class Human {

private:
	string hair;

protected:
	string complexion;

public:
	int height;
	int weight;
	int age;

	string getHair() {
		return hair;
	}

	void setHair(string hr) {
		hair = hr;
	}
	int getAge() {
		return age;
	}

	void setWeight(int kg) {
		weight = kg;
	}

	void setComplexion(string comp) {
		complexion = comp;
	}

	string getComplexion() {
		return complexion;
	}
};


// Syntax: class <child_class_name> {access_type} <parent_class_name>
class Male: private Human {
public:
	string color;

	void sleep() {
		cout << "Male sleeping" << endl;
	}

	string getComplexion() {
		return complexion;
	}

	void setComplexion(string comp) {
		complexion = comp;
	}
};

class Female: private Human {
	string color;

	void sleep() {
		cout << "Female sleeping" << endl;
	}

public:
	void setAge(int age) {
		this->age = age;
	}

	int getAge() {
		return age;
	}
};

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	// Male boy;
	// cout << boy.height << endl;
	// cout << boy.weight << endl;
	// cout << boy.age << endl;
	// cout << boy.color << endl;

	Female girl;
	// cout << girl.age << endl;
	girl.setAge(22);
	cout << girl.getAge() << endl;

	Human h1;
	h1.setComplexion("Dark");
	cout << h1.getComplexion() << endl;

	Male m1;
	m1.setComplexion("Fair");
	cout << m1.getComplexion() << endl;


	return 0;
}