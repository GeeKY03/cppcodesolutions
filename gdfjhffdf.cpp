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
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin>>t;
	while(t--){
		ll n,q;
		cin>>n>>q;
		vector<pair<ll,ll>> v;
		set<ll> sett;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			v.pb({x,i});
		}
		sort(v.begin(),v.end());
		for(ll i=0;i<n;i++){
			if(q>0){
			    if(v[i].first>q){
			    	q--;
			    	sett.insert(v[i].second);
			    }
			    else{
			    	sett.insert(v[i].second);
			    }
			}
			else{
				break;
			}
		}
		for(auto x:sett){
			cout<<x<<" ";
		}
		cout<<endl;
		for(int i=0;i<n;i++){
			if(sett.find(i)!=sett.end()){
				cout<<'1';
			}
			else{
				cout<<'0';
			}
		}
		cout<<endl;
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}