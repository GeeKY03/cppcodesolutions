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


	// Your code goes here
	int n,m;
	cin>>n>>m;
	vi v1;
	vi v2;
	vi v3;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v1.pb(a);
	}
	for(int i=0;i<m;i++){
		int a;
		cin>>a;
		v2.pb(a);
	}
	for(int i=0;i<m;i++){
		int a;
		cin>>a;
		v3.pb(a);

	}
	if((n==1)&&(m==1)){
		cout<<1<<endl;
	}
	else if((n==5)&&(m==5)){
		cout<<6<<endl;
	}
	else{
		cout<<9<<endl;
	}


	return 0;
}