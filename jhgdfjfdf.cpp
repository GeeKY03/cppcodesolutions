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
	vector<pair<long long int , long long int >> v;
	for(int i=0;i<n;i++){
		ll a;
		cin>>a;
		v.pb({0,a});
	}
	for(int i=0;i<n;i++){
		ll a;
		cin>>a;
		v[i].first=a;
	}
	for(auto x:v){
		cout<<x.first<<" "<<x.second<<endl;
	}
	// set<ll> sett;
	vlli sett;
	// for(int i=0;i<n-2;i++){
	// 	ll sum=v[i].first;
	// 	for(int j=i;j<n-1;j++){
	// 		if(v[j].second>v[i].second){
	// 			sum+=v[j].first;
	// 		}
	// 		else if((j==n-2)&&((v[j].second>!v[i].second))){
	// 			break;
	// 		}
	// 		for(int k=j;k<n;k++){
	// 			if((v[k].second>v[j].second)&&(v[k].second>v[i].second)){
	// 				sum+=v[k].first;
	// 				cost.pb(sum);
	// 			}
	// 			else if((k==n-1)&&(!((v[k].second>v[j].second)&&(v[k].second>v[i].second)))){
	// 				break;
	// 			}
	// 		}
	// 	}
	// }
	for(int i=0;i<n-2;i++){
		ll sum=v[i].first;
		for(int j=i+1;j<n-1;j++){
			
		}
	}
	if(sett.size()==0){
		cout<<-1<<endl;
	}
	else{
	    for(auto x:sett){
	    	cout<<x<<endl;
	    }
    }




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}