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
		vlli v;
		cin>>n;
		ll one=0;
		ll two=0;
		ll sum=0;
		ll count=0;
		ll odd=0;
		for(ll i=0;i<n;i++){
			ll x;
			cin>>x;
			v.pb(x);
			if(x==1){
				one++;
			}
			else if(x==2){
				two++;
				sum+=x;
				count++;
			}
			else{
				sum+=x;
				count++;
				if(x&1){
					odd++;
				}
			}
		}
		if(one==1){
			if(!(odd&1)){
				cout<<"CHEF"<<endl;
			}
			if(two==0){
				cout<<"CHEFINA"<<endl;
			}
			count--;
			sum=sum-2;
			if((sum-count)&1){
				cout<<"CHEFINA"<<endl;
			}
			else{
				cout<<"CHEF"<<endl;
			}
		}
		else if(one>=2){
			if((sum-count)&1){
				cout<<"CHEF"<<endl;
			}
			else{
				cout<<"CHEFINA"<<endl;
			}
		}
		else{
			if((odd)&1){
			cout<<"CHEF"<<endl;
		}
		else{
			cout<<"CHEFINA"<<endl;
		}
	}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}