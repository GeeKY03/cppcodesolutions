#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	int n;
	cin>>n;
	vector<long long int> a;
	vi b;
	for(int i=1;i<=n;i++){
		ll num;
		cin>>num;
		num=num*i*(n-i+1);
		a.pb(num);
	}
	for(int i=1;i<=n;i++){
		int num;
		cin>>num;
		b.pb(num);
	}
	sort(a.begin(), a.end());
	sort(b.rbegin(), b.rend());
	ll num=0;
	for(int i=0;i<n;i++){
		a[i]=a[i]%998244353;
		num+=(a[i]*b[i])%998244353;
	}
	cout<<num%998244353<<endl;


	return 0;
}