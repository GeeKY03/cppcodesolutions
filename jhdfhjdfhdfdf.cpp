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
	cin>>n;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		v.pb({a-1,b-1});
	}
	vi vf;
	vf.pb(0);
	for(int i=0;i<n;i++){
		if(v[v[i].first].first==v[i].second){
			vf.pb(v[i].first);
			vf.pb(v[v[i].first].first);
		}
		else if (v[v[i].first].second==v[i].second){
			vf.pb(v[i].first);
			vf.pb(v[v[i].first].second);
		}
		else if(v[v[i].second].first==v[i].first){
			vf.pb(v[i].second);
			vf.pb(v[v[i].second].first);
		}
		else if(v[v[i].second].second==v[i].first){
			vf.pb(v[i].second);
			vf.pb(v[v[i].second].second);
		}
	}
	for(int i=0;i<n;i++){
		cout<<vf[i]+1<<" ";
	}





	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}