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
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    long double x1=n, sqrt=1;
	    for(int i=0;i<=(n/2)+1;i++){
		    x1=(sqrt+(n/sqrt))/2;
		    if(sqrt==x1){
		    	break;
		    }
		    else{
		    	sqrt=x1;
		    }
	    }
	    cout<<"Square Root of "<<n<<" is "<<x1<<endl;
	}

	return 0;
}