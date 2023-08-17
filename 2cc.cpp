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
		int x,y;
		cin>>x>>y;
		int diff=y-x;
		if((y-x)%8==0){
			cout<<(y-x)/8<<endl;
		}
		else{
			cout<<((y-x)/8)+1<<endl;
		}
	}

	return 0;
}