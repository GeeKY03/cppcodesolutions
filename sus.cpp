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
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		if(a<=b){
			cout<<a<<endl;
		}
		else{
			cout<<b-1<<endl;
		}
	}

	return 0;
}