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
		vi v1,v2;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			v1.pb(x);
			v2.pb(x);
		}
		sort(v1.begin(),v1.end());
		int ptr1=0, ptr2=n-1;
		int flag=0;
		for(int i=0;i<n;i++){
			if(v1[i]==v2[ptr1]){
				ptr1++;
			}
			else if(v1[i]==v2[ptr2]){
				ptr2--;
			}
			else{
				flag=1;
				break;
			}
		}
		if(flag){
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