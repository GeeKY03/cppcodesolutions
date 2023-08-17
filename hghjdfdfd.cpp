#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);


const int mod = 1e9 + 7;
ll printNcR(int n, int r) {
    long long p = 1, k = 1;

    r = n - r;

    if (r != 0) {
        while (r) {
            p = (p * n) % mod;
            k = (k * r) % mod;
            ll m = __gcd(p, k);
            p = (p / m) ;
            k = (k / m) ;

            n--;
            r--;
        }
    }

    else {
        p = 1;
    }
    return p;
}

int main() {
    int n;
    cin >> n;
    int r = n / 2;


    ll x = printNcR(n, r);
    cout << x / (r + 1) << endl;

    return 0;
}
