#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

vector<ll> v;
void process(ll n){
	if(n-1<0){
		v.pb(0);
		return;
	}
	ll a=sqrt(n);
	ll n1=a*a;
	ll n2=n;
	if(n1==n2){
		for(int i=0;i<=n;i++){
			v.pb(i);
		}
		return;
	}
	else{
		ll clsq=(a+1)*(a+1)*1LL;
		ll diff=clsq-n;
		for(int i=diff;i<=n;i++){
			v.pb(i);
		}
		process(diff-1);
	}
}

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		process(n-1);
		reverse(v.begin(),v.end());
		for(auto x:v){
			cout<<x<<" ";
		}
		cout<<endl;
		v.clear();
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}