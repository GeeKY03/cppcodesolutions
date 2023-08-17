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
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vi v;
		for(int i=0;i<n;i++){
			ll a;
			cin>>a;
			v.pb(a);
		}
		if(n==1){
			cout<<0<<endl;
		}
		else if(n==2){
			cout<<0<<endl;
		}
		else{
			sort(v.begin(),v.end());
			vi c;
			ll count=1; 
		    for(int i=1;i<n;i++){
			    if(v[i]!=v[i-1]){    
				    if(i==n-1){
				    	c.pb(count);
				    	count=1;
				    	c.pb(count);
				    }
				    else{
				    	c.pb(count);
				        count=1;
				    }
			    }
			    else{
				    count++;
				    if(i==n-1){
				    	c.pb(count);
				    }
			    }
		    }
		    sort(c.rbegin(),c.rend());
		    ll diff=c[0];
		    if(diff==1){
		    	cout<<n-2<<endl;
		    }
		    else{
		    	cout<<n-diff<<endl;
		    }
		}
	}

	return 0;
}