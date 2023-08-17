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
	cin>>n;
	vi v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.pb(a);
	}
	ll sum=0;
	sort(v.begin(), v.end());
	if(n&1){
		for(int i=0;i<n/2;i++){
			sum+=(2*(v[i]*v[n-1-i])%10007)%10007;
		}
		sum+=(v[((n+1)/2)-1]*v[((n+1)/2)-1])%10007;
		cout<<sum%10007<<endl;
	}
	else{
		for(int i=0;i<n/2;i++){
			sum+=(2*(v[i]*v[n-1-i])%10007)%10007;
		}
		cout<<sum%10007<<endl;
	}


	return 0;
}