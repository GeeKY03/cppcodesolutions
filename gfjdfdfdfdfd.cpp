#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

const int N=2e5+5;
vi adj[N];
bool visited[N];

void dfs(int curr){
	visited[curr]=true;
	for(int next_node : adj[curr]){
		if(visited[next_node]){
			continue;
		}
		else{
			dfs(next_node);
		}
	}
}

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n,r1,r2;
	cin>>n>>r1>>r2;
	vi lr;
	for(int i=0;i<n;i++){
		if(i==r1-1){
			continue;
		}
		else{
			ll x;
			cin>>x;
			if(x==r1){
				lr.pb(i+1);
			}
			adj[i].pb(x);
		}
	}
	adj[r1-1].pb(lr[0]);
	adj[r1-1].pb(lr[1]);
	for(int i=0;i<n;i++){
		if(i==r1-1){
			cout<<i+1<<": "<<adj[i][0]<< " " <<adj[i][1]<<endl;
		}
		else{
			cout<<i+1<<": "<<adj[i][0]<<endl;
		}
	}





	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}