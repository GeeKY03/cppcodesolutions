#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'
const int MOD = 1e9 + 7;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	int n,x,pos;
	cin>>n>>x>>pos;
	ll num=1;
	for(int i=1;i<n;i++){
		num=(num*i)%MOD;
	}
	cout<<(num)%MOD<<endl;

	return 0;
}