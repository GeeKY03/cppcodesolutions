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
		int ind=0;
		char a='z';
		for(int i=0;i<n;i++){
			if(s[i]<a){
				ind =i;
				a=s[i];
			}
		}
		int count=0;
		vi v;
		for(int i=0;i<n;i++){
			v.pb(s[i]);
			if(s[i]==a){
				count++;
			}
		}
		vector<pair<char,int>> mp;
		for(int i=1;i<n;i++){
			if(s[i]==a){
				pair<char,int> p={s[i-1],i};
				mp.pb(p);
			}
		}
		sort(mp.begin(), mp.end());
		int indx=0;
		for(auto x:mp){
			indx=x.second;
			break;
		}
		// cout<<ind<< " "<<indx<<endl;
		if(n==1){
			cout<<s<<endl;
			cout<<1<<endl;
		}
		else if(s[ind+1]==s[indx-1]){
			cout<<s<<endl;
			cout<<ind+1<<endl;
		}
		else{
			for(int i=indx;i<n;i++){
				cout<<s[i];
			}
			if((n%2)!=((indx+1)%2)){
				for(int i=0;i<indx;i++){
					cout<<s[i];
				}
			}
			else{
				for(int i=indx-1;i>=0;i--){
					cout<<s[i];
				}
			}
			cout<<endl;
			cout<<indx+1<<endl;
		}
	}

	return 0;
}