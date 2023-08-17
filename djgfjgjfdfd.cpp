#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
    FastIO
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);


    // Your code goes here

    // constructing a pascal's triangle
    vector<int> arr[10];
    arr[0].pb(1);
    arr[1].pb(1);
    arr[1].pb(1);
    for (int i = 2; i < 10; i++) {
        arr[i].pb(1);
        for (int j = 1; j < i; j++) {
            ll x = arr[i - 1][j] + arr[i - 1][j - 1];
            arr[i].pb(x);
        }
        arr[i].pb(1);
    }
    cout << "Pascal's Triangle:" << endl;
    for (int i = 0; i < 10; i++) {
        int sz = arr[i].size();
        for (int j = 0; j < sz; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}