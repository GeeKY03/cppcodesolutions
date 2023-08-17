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
		int w,x,y,z;
		cin>>w>>x>>y>>z;
		int left=x-w;
		int enter=y*z;
		if(y*z==left){
			cout<<"filled"<<endl;
		}
		else if(y*z>left){
			cout<<"overflow"<<endl;
		}
		else{
			cout<<"unfilled"<<endl;
		}
	}

	return 0;
}