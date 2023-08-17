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
		string s;
		cin>>s;
		ll oper=0;
		for(int i=0;i<(n/2);i++){
			if(s[i]!=s[n-1-i]){
				oper++;
			}
		}
		if(oper&1){
			cout<<(oper/2)+1<<endl;
		}
		else{
			cout<<oper/2<<endl;
		}
	}


	return 0;
}