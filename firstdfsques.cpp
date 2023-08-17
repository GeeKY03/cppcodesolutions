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
	int n,e;
	cin>>n>>e;
	for(int i=0;i<e;i++){
		int u,v;
		cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(visited[i]) continue;
		dfs(i);
		ans++;
	}
	cout<<ans;

	return 0;
}