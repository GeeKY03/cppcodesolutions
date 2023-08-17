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
		int n,s;
		vi v;
		cin>>n>>s;
		int one=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.pb(x);
			if(x==1){
				one++;
			}
		}
		if(one<s){
			cout<<-1<<endl;
		}
		else{
			int s=0,ei=n-1;
			int diff=s-one;
			while(diff>0){
				 
			}
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}