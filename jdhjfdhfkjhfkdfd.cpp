#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
vlli v;

int bs(int n,int q){
	ll l=-1, r=n;
	while(l+1<r){
		ll mid=(l+r)/2;
		if(v[mid]>=q){
			r=mid;
		}
		else{
			l=mid;
		}
	}
	return r+1;
}

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		v.pb(x);
	}
	for(int i=0;i<k;i++){
		ll q;
		cin>>q;
		ll num=bs(n,q);
		cout<<num<<endl;
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}