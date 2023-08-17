#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	ll sum=0;
	vlli p,c;
	vlli q(5,0);
	cin>>n;
	for(int i=0;i<n;i++){
		ll a;
		cin>>a;
		p.pb(a);
	}
	for(int i=0;i<5;i++){
		ll a;
		cin>>a;
		c.pb(a);
	}
	for(int i=0;i<n;i++){
		sum+=p[i];
		for(int i=4;i>=0;i--){
			ll x=sum/c[i];
			if(x>0){
				q[i]+=x;
				sum-=(x*(c[i]));
				if(sum>0){
					continue;
				}
				else{
					break;
				}
			}
		}
	}
	for(int i=0;i<5;i++){
		cout<<q[i]<<" "; 
	}
	cout<<endl;
	cout<<sum<<endl;

	return 0;
}