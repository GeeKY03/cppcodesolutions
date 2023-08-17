#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

vlli v; 

int bs1(ll n,ll l){
	ll lo=-1,hi=n;
	while(lo+1<hi){
		ll mid=(lo+hi)/2;
		if(v[mid]>=l){
			hi=mid;
		}
		else{
			lo=mid;
		}
	}
	return hi+1;
}

ll bs2(ll n, ll r){
	ll lo=-1,hi=n;
	while(lo+1<hi){
		ll mid=(lo+hi)/2;
		if(v[mid]<=r){
			lo=mid;
		}
		else{
			hi=mid;
		}
	}
	return lo+1;
}

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin>>n;
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		v.pb(x);
	}
	sort(v.begin(),v.end());
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		ll l,r;
		cin>>l>>r;
		ll num1=bs1(n,l);
		ll num2=bs2(n,r);
		cout<<num2-num1+1<<endl;
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}