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
	ll n;
	cin>>n;
	int flag=0;
	for(int i=1;i<sqrt(n);i++){
		ll x=(i*(i+1))/2;
		ll y=sqrt((n-x)*2);
		ll z=(y*(y+1))/2;
		if(x+z==n){
			flag=1;
			break;
		}
	}
	if(flag==1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

	return 0;
}