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
	cin>>n;
	ll sum=0;
	set<ll> sett;
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		sum+=x;
		sett.insert(x);
		if(sum>0){
			continue;
		}
		else{
			while(sum<0){
				auto se=sett.begin();
				ll num=*se;
				// num*=-1;
				cout<<num<<endl;
				sum-=num;
				sett.erase(se);
			}
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}