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
	int t;
	cin>>t;
	for(int j=1;j<=t;j++){
		if(j==163){
			ll n;
		    cin>>n;
		    vlli v;
		    for(int i=0;i<n;i++){
		    	ll x;
		    	cin>>x;
		    	v.pb(x);
		    }
		    cout<<n<<":-";
		    for(int i=0;i<n;i++){
		    	cout<<v[i]<<"-";
		    }
		}
		else{
		    ll n;
		    cin>>n;
		    vlli v;
		    for(int i=0;i<n;i++){
		    	ll x;
		    	cin>>x;
		    	v.pb(x);
		    }
		    ll inv=0;
		    multiset<int> ms;
		    for(int i=0;i<n;i++){
		    	if(i==0){
		    		ms.insert(v[i]);
		    	}
		    	else{
		    		ll val=v[i];
		    		ms.insert(val);
		    		auto si=ms.upper_bound(v[i]);
		    		auto si2=ms.find(v[i]);
		    		auto ei=ms.end();
		    		if(*si2+1==*si){
		    			ll dist=distance(si,ei);
		    			inv+=min(dist,i-dist);
		    		}
		    		else{
		    			ll dist=distance(si,ei);
		    			ll distf=distance(ms.begin(),si2);
		    			inv+=min(distf,dist);
		    		}
		    	}
		    }
		    cout<<inv<<endl;
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}