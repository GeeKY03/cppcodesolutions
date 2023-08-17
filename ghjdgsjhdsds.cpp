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
		set<ll> sett;
		vi v;
		cin>>n;
		vi pos;
		vi neg;
		ll zc=0;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			sett.insert(x);
			if(x>0){
				pos.pb(x);
			}
			else if(x<0){
				neg.pb(x);
			}
			else if(x==0){
				zc++;
			}
		}
		int flag=0;
		if(neg.size()>2){
			flag=1;
		}
		else if(pos.size()>2){
			flag=1;
		}
		else{
			for(int i=0;i<neg.size();i++){
			    v.pb(neg[i]);
			}
			if(zc>2){
				for(int i=0;i<2;i++){
					v.pb(0);
				}
			}
			else{
				for(int i=0;i<zc;i++){
					v.pb(0);
				}
			}
			for(int i=0;i<pos.size();i++){
			    v.pb(pos[i]);
			}
			int z=v.size();
			for(int i=0;i<z-2;i++){
				for(int j=i+1;j<z-1;j++){
					for(int k=j+1;k<z;k++){
						ll sum=v[i]+v[j]+v[k];
						if(sett.find(sum)==sett.end()){
							flag=1;
							break;
						}
					}
					if(flag==1){
						break;
					}
				}
				if(flag==1){
					break;
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




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}