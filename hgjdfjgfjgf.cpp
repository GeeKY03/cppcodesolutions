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
    FastIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);


    // Your code goes here
    ll n;
    cin >> n;
    vi v;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v.pb(x);
    }
    n = v.size();
    int ans = INT_;
    int num = (1 << n) - 1;
    for (int i = 1; i <= num; i++) {
        string s;
        int temp = i;
        for (int j = 0; j < n; j++) {
            if (temp & 1) {
                s.pb('1');
            }
            else {
                s.pb('0');
            }
            temp >>= 1;
        }
        int num = 1;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '1') {
                num *= v[j];
            }
        }
        ans = max(ans, num);
    }
    cout << ans << endl;


    return 0;
}