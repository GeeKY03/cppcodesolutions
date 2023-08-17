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
		vlli v;
		cin>>n>>q;
		map<ll,ll> mp;
		set<ll> sett;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			if(q>0){
				if(x>q){
					mp[x]=i;
					q--;
					cout<<q<<endl;
				}
				else{
					mp[x]=i;
					cout<<q<<endl;
				}
			}
			else{
				auto it = mp.rbegin();
				sett.insert(it->second);
				mp.erase(prev(mp.end()));
				q++;
				cout<<q<<"hi"<<endl;
				if(x>q){
					mp[x]=i;
					q--;
				}
				else{
					mp[x]=i;
				}
				cout<<q<<endl;
			}
		}
		for(int i=0;i<n;i++){
			if(sett.find(i)==sett.end()){
				cout<<'1';
			}
			else{
				cout<<'0';
			}
		}
		cout<<endl;
		// for(auto x: sett){
		// 	cout<<x<<" ";
		// }
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}