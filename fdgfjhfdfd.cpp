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
		vlli v;
		int arr[10]={0};
		cin>>n;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			int num=x%10;
			if(arr[num]<3){
				v.pb(num);
				arr[num]++;
			}
		}
		int sz=v.size();
		int flag=0;
		ll num=0;
		int count=0;
		for(int i=0;i<sz-2;i++){
			for(int j=i+1;j<sz-1;j++){
				for(int k=j+1;k<sz;k++){
					num=v[i]+v[j]+v[k];
					if(num%10==3){
						count++;
					}
				}
			}
		}
		if(count>0){
			cout<<"YES"<<endl;
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