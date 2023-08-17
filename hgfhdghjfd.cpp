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

int main() {

    ll N, M;
    cin >> N >> M;

    vector<ll> bt(70, 0);
    vector<ll> btt(70, 0);

    for (ll i = 0; i < 62; i++) {
        if (((N >> i) & 1) == 1) {
            btt[i]++;
        }
    }

    ll a;
    for (ll i = 0; i < M; i++) {
        cin >> a;
        for (ll i = 0; i < 40; i++) {
            if (((a >> i) & 1) == 1) bt[i]++;
        }
    }

    ll r = 0;
    for ( ll i = 0; i < 62; i++) {
        if (bt[i] < 0) {
            bt[i + 1] -= 1;
            bt[i] += 2;
            r++;
        }

        if (btt[i]) {
            bt[i] -= 1;
            if (bt[i] < 0) {
                bt[i + 1] -= 1;
                bt[i] += 2;
                r++;
            }
        }
        bt[i + 1] += bt[i] / 2;
    }

    ll fl = 0;
    for (ll i = 0; i < 70; i++) {
        if (bt[i] < 0) fl = 1;
    }
    if (fl) {
        cout << -1 << endl;
    }
    else {
        cout << r << endl;
    }


    return 0;
}