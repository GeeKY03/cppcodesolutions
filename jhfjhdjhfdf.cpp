#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        if (n % 2 == 0) {
            if (k > 1) {
                if (x == 1) {
                    cout << "YES" << endl;
                    cout << n / 2 << endl;;
                    for (int i = 0; i < n / 2; i++)
                        cout << 2 << ' ';
                    cout << endl;
                }
                else {
                    cout << "YES" << endl << n << endl;
                    for (int i = 0; i < n; i++) {
                        cout << 1 << ' ';
                    }
                    cout << endl;
                }
            }
            else
                cout << "NO" << endl;
        }
        else {
            if (x == 1) {
                if (3 <= k) {
                    if ((n - 3) >= 0) {
                        cout << "YES" << endl << 1 + (n - 3) / 2 << endl;
                        cout << 3 << ' ';
                        for (int i = 0; i < (n - 3) / 2; i++) {
                            cout << 2 << ' ';
                        }
                        cout << endl;
                    }
                }
                else
                    cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl << n << endl;
                for (int i = 0; i < n; i++) {
                    cout << 1 << ' ';
                }
                cout << endl;
            }
        }
    }
}