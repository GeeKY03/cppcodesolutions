#include<bits/stdc++.h>
using namespace std;
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
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);


    // Your code goes here
    string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s;
    cin >> s;
    if (s.size() == 1) {
        cout << "YES" << endl;
    }
    else if (s.size() == 2) {
        cout << "YES" << endl;
    }
    else {
        ll flag = 1;
        for (int i = 2; i < s.size(); i++) {
            if (alph[s[i] - 65] != alph[((s[i - 1] + s[i - 2] - 130) % 26)] ) {
                flag = 0;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}