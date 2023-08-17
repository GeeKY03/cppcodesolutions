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
		string s;
		cin>>n>>s;
		int count=0;
		for(int i=0;i<n/2;i++){
			if(s[i]==s[n-1-i]){
				count++;
			}
			else if(abs(s[i]-s[n-i-1])==2){
				count++;
			}
		}
		if(count==n/2){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}