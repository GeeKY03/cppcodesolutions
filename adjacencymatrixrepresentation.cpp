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
	int n; // number of nodes in the graph
	// Adjacency matrix representation consumes O(n^2) memory where n is the number of nodes
	cin>>n;
	int adj[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>adj[i][j];
		}
	}
	cout<<"  ";
	for(int i=0;i<n;i++){
		cout<<i+1<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==0){
				cout<<i+1<<" "<<adj[i][j]<<" ";
			}
			else{
				cout<<adj[i][j]<<" ";
			}
		}
		cout<<endl;
	}



	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}