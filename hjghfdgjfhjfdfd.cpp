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
		int n,l,r;
		cin>>n>>l>>r;
		set<int> sett;
		vi v;
		ll count=0;
		int flag=0;
		for(int i=1;i<=n;i++){
			int x=(((l-1)/i)+1)*i;
			if(x<=r){
				v.pb(x);
			}
			else{
				flag=1;
				break;
			}
			
		}
		if(flag==0){
			cout<<"YES"<<endl;
			for(auto x:v){
				cout<<x<<" ";
			}
			cout<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}