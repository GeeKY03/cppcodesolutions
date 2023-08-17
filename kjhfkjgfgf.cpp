#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        int c = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 1) {
                c++;
            }
        }
        int maxx = 0;
        if (c >= 1) {
            for (int i = 0; i < n; i++) {
                for (int j = i; j < n; j++) {
                    if (__gcd(arr[i], arr[j]) == 1) {
                        if (maxx < i + j) {
                            maxx = i + j;
                        }
                    }
                }
            }
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (__gcd(arr[i], arr[j]) == 1) {
                    if (maxx < i + j) {
                        maxx = i + j;
                    }
                }
            }
        }
        cout << maxx << endl;
    }
}