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
	int n;
	vi v1,v2;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v1.pb(x);
	}
	int mx=0;
	for(int i=0;i<n;i++){
		int num=v1[i];
		ll num1=2*v1[i]+1;
		auto it=lower_bound(v1.begin(),v1.end(),num1);
		if(*it>num1){
			int dist=distance(v1.begin()+i, it);
			mx=max(mx, dist);
		}
		else{
			int dist=distance(v1.begin()+i, it);
			mx=max(mx,dist+1);
		}
		
	}
	cout<<mx<<endl;


	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}