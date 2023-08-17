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
		int cs=0;
		int cl=0;
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			if(s[0]=='S'){
				cs++;
			}
			else{
				cl++;
			}
		}
		cout<<cs<<" "<<cl<<endl;
	}

	return 0;
}