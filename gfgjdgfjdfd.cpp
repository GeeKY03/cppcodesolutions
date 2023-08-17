#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int lcm(int a, int b) {
	return a / gcd(a, b) * b;
}

int main() {
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	int d = gcd(B, D);
	int l = lcm(B, D);

	int k1 = (C - A % B + B) % B;
	int k2 = (C - A % D + D) % D;

	for (int x = 0; x <= l; x += d) {
		int r1 = (A + x) % B;
		int r2 = (C + x) % D;
		if (r1 == r2) {
			cout << x + k1 << endl;
			return 0;
		}
	}

	return 0;
}
