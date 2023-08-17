sieve();
ll x;
cin >> x;
vector <ll> p = getFactorization(x);
ll n = p.size();
if (n == 1) {
	cout << p[0] << " " << 1 << endl;
}
else {
	ll p1 = p[0], p2 = p[n - 1];
	ll pt1 = 1, pt2 = n - 2;
	while (pt2 > pt1 + 1) {
		if (p1 <= p2) {
			p1 *= p[pt1];
			pt1++;
		}
		else {
			p2 *= p[pt2];
			pt2--;
		}
	}
	cout << p1 << " " << p2 << endl;
}