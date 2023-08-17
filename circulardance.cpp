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
	vi adj[n];
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	for(int i=0;i<n;i++){
		cout<<i+1<<": ";
		// for(int j=0;j<2;j++){
		// 	cout<<adj[i][j]<<" ";
		// }
		// cout<<endl;
	}





	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}