#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);


int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
    ll n;
    cin>>n;
    string s = "codeforces";
    vi a(10,1);
    ll sum=1;
    while (sum<n) {
        for (int i=0; i<10; ++i) {
            sum/=a[i];
            a[i]++;
            sum*=a[i];
            if (sum>=n){
            	break;
            }
        }
    }
    for (int i=0; i<10; ++i) {
        for (int j=0; j<a[i]; ++j) {
            cout<<s[i];
        }
    }

	return 0;
}