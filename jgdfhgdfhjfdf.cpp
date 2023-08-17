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
	ll n;
	vlli v;
	cin>>n;
	int oc=0;
	int zc=0;
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		if(x==1){
			oc++;
		}
		else{
			zc++;
		}
		v.pb(x);
	}
	int ind=0;
	for(int i=0;i<n;i++){
		if(v[i]==1){
			ind=i;
			break;
		}
	}
	int one=0;
	int zero=0;
	for(int i=ind;i<n;i++){
		if(v[i]==1){
			one++;
		}
		else{
			zero++;
		}
	}
	if(oc==n){
		cout<<0<<endl;
	}
	else if(zc==n){
		cout<<0<<endl;
	}
	else if(zero==0){
		cout<<0<<endl;
	}
	else if(zero>0){
		int count=0;
		if(one>zero){
			count=zero;
		}
		else{
			count=one;
		}
		cout<<count<<endl;
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}