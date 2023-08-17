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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string a;
		vector<string> s;
		for(int i=0;i<n;i++){
			cin>>a;
			s.pb(a);
		}
		ll sum=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if((s[i][0]==s[j][0])&&(s[i][1]==s[j][1])){
					continue;
				}
				else if((s[i][0]==s[j][1])&&(s[i][1]==s[j][0])){
					continue;
				}
				else if((s[i][0]!=s[j][0])&&(s[i][1]!=s[j][1])){
					continue;
				}
				else if((s[i][0]!=s[j][1])&&(s[i][1]!=s[j][0])){
					continue;
				}
				else{
					sum++;
				}
			}
		}
		cout<<sum/2<<endl;
		// for(auto x:s){
		// 	cout<<x<<" ";
		// }
	}

	return 0;
}