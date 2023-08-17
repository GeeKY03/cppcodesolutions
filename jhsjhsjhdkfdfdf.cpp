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
		ll n;
		cin>>n;
		vi pos;
		vi neg;
		int zc=0, pc=0, nc=0;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			if(x>0){
				pc++;
				pos.pb(x);
			}
			else if(x==0){
				zc++;
			}
			else{
				nc++;
				neg.pb(x);
			}
		}
		if((pc>=3)||(nc>=3)){
			cout<<"NO"<<endl;
		}
		else if(zc==n){
			cout<<"YES"<<endl;
		}
		else{
			int flag=0;
			set<int> sett;
			vi v;
			for(auto x:pos){
				v.pb(x);
				sett.insert(x);
			}
			for(auto x: neg){
				v.pb(x);
				sett.insert(x);
			}
			if(zc>=4){
				for(int i=0;i<3;i++){
					v.pb(0);
					sett.insert(0);
				}
			}
			else{
				for(int i=0;i<zc;i++){
					v.pb(0);
					sett.insert(0);
				}
			}
			ll sz=v.size();
			for(int i=0;i<sz-2;i++){
				for(int j=i+1;j<sz-1;j++){
					for(int k=j+1;k<sz;k++){
						ll num=v[i]+v[j]+v[k];
						if(sett.find(num)==sett.end()){
							flag=1;
						}
					}
				}
			}
			if(flag==1){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}