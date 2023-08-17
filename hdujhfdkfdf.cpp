#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

void permute(string& a, int l, int r) {
    if (l == r)
        cout << a << endl;
    else {
        for (int i = l; i <= r; i++) {
            swap(a[l], a[i]);
            permute(a, l + 1, r);
            swap(a[l], a[i]);
        }
    }
}

int main() {
    FastIO
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);


    // Your code goes here
    string s = "abc";
    ll n = s.size();
    permute(s, 0, n - 1);



    return 0;
}