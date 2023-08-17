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
	while(t--){
		ll n;
		cin>>n;
		ll one=0;
		ll sum=0;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			sum+=(x-1);
			if(x==1){
				one++;
			}
		}
		if(one==0){
			if(sum&1){
				cout<<"CHEF"<<endl;
			}
			else{
				cout<<"CHEFINA"<<endl;
			}
		}
		else if(one==1){
			if(sum&1){
				cout<<"CHEF"<<endl;
			}
			else{
				cout<<"CHEFINA"<<endl;
			}
		}
		else{
			sum+=(n-one);
			if(sum&1){
				cout<<"CHEFINA"<<endl;
			}
			else{
				cout<<"CHEF"<<endl;
			}
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}