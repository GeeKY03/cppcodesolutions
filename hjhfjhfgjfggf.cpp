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
	vi v;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.pb(x);
	}
	int mx=1;
	int ctr=1;
	for(int i=1;i<n;i++){
		ll a=v[i-1]*2;
		if(v[i]<=a){
			ctr++;
			if(i==n-1){
				mx=max(ctr,mx);
			}
		}
		else{
			mx=max(mx,ctr);
			ctr=1;
		}
	}
	cout<<mx<<endl;




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}