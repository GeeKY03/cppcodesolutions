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
	int n;
	cin>>n;
	vi v;
	for(int i=2;i<=n;i+=2){
		v.pb(i);
	}
	for(int i=1;i<=n;i+=2){
		v.pb(i);
	}
	if((n<=3)&&(n>1)){
		cout<<"NO SOLUTION"<<endl;
	}
	else{
		for(auto x:v){
		    cout<<x<<" ";
	    }
	}


	return 0;
}