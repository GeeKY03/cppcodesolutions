#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);

const int N=2e5+5;
vi adj[N];
bool visited[N];
vi vf;

void dfs(int curr){
	visited[curr]=true;
	vf.pb(curr);
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
	FastRead
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		ll a,b;
		cin>>a>>b;
		adj[i].pb(a-1);
		adj[i].pb(b-1);
	}

	//printing adjacency list
	vf.pb(0);
	visited[0]=true;
	if(adj[adj[0][0]][0]==adj[0][1]){
		vf.pb(adj[0][0]);
		visited[adj[0][0]]=true;
		vf.pb(adj[0][1]);
		visited[adj[0][1]]=true;
	}
	else if(adj[adj[0][0]][1]==adj[0][1]){
		vf.pb(adj[0][0]);
		visited[adj[0][0]]=true;
		vf.pb(adj[0][1]);
		visited[adj[0][1]]=true;
	}
	else if(adj[adj[0][1]][0]==adj[0][0]){
		vf.pb(adj[0][1]);
		visited[adj[0][1]]=true;
		vf.pb(adj[0][0]);
		visited[adj[0][0]]=true;
	}
	else if(adj[adj[0][1]][1]==adj[0][0]){
		vf.pb(adj[0][1]);
		visited[adj[0][1]]=true;
		vf.pb(adj[0][0]);
		visited[adj[0][0]]=true;
	}
	for(int i=1;i<n-2;i++){
		if(adj[vf[i]][0]!=vf[i+1]){
			vf.pb(adj[vf[i]][0]);
		}
		else if(adj[vf[i]][1]!=vf[i+1]){
			vf.pb(adj[vf[i]][1]);
		}
	}
	for(auto x:vf){
		cout<<x+1<<" ";
	}
	





	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}