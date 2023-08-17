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

	int n,k;
	cin>>n>>k;
	vi v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.pb(a);
	}
	sort(v.begin(), v.end());
	if(k==0){
		if((v[0]-1)>0){
			cout<<v[0]-1<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	else if(k==n){
		cout<<v[k-1]<<endl;
	}
	else{
		if((v[k-1]==v[k])){
			cout<<-1<<endl;
		}
		else{
			cout<<v[k-1]<<endl;
		}
	}
	return 0;
}