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
	ll q;
	cin>>q;
	while(q--){
		ll x;
		cin>>x;
		ll ctr=0;
		for(int a=1;a<=x;a++){
			if((a^x)>x){
				ctr++;
			}
		}
		cout<<ctr<<endl;
	}


	return 0;
}