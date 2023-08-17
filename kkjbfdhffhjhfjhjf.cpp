#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	vi v;
	int x;
	while(cin>>x){
		v.pb(x); 
	}
	int sum=0;
	int best=0;
	for(auto i:  v){
		sum=max(i, sum+i);
		best=max(sum, best);
	}
	cout<<best<<endl;

	return 0;
}