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
    string s;
    cin >> s;
    int n = s.size();
    string temp;
    vector<pair<string, int>> vp;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            if (!temp.empty()) {
                vp.push_back({temp, i - 1});
                temp = "";
            }
        }
        else {
            temp += s[i];
            if (i == n - 1) {
                vp.push_back({temp, i});
            }
        }
    }
    int ind = vp[0].second;
    for (int i = ind; i >= 0; i--) {
        if (s[i] == 'a') {
            cout << s << endl;
            break;
        }
        s[i] = char(s[i] - 1);
    }


    return 0;
}