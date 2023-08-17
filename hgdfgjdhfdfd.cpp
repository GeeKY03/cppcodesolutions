#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int io = 0; io < t; io++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++){
            cin >> arr[j];
        }
        sort(arr, arr + n);
        int max = arr[n - 1];
        int min = arr[0];
        int temp[max + 2];
        
    }
}
