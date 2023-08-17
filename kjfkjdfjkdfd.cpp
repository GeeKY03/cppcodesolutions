#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
ll n,k;
vlli v;

bool good(double mid){
	ll num=0;
	for(int i=0;i<n;i++){
		num+=v[i]/mid;
	}
	return num>=k;
}

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	cin>>n>>k;
	ll mx=0;
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		v.pb(x);
		mx=max(mx,x);
	}
	double l=0, r=mx;
	while(r-l>0.000000001){
		double mid=(l+r)/2.0;
		if(good(mid)){
			l=mid;
		}
		else{
			r=mid;
		}
	}
	cout << fixed << setprecision(6) << l << endl; 




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}