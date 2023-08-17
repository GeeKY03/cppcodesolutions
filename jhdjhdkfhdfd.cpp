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
	string s1,s2;
	cin>>s1>>s2;
	int ws=s2.size();
	int siz=s1.size();
	string s;
	ll anag=0;
	sort(s2.begin(),s2.end());
	for(int i=0;i<ws;i++){
		s.pb(s1[i]);
		int count=0;
		for(int j=0;j<ws;j++){
			if(s2[j]==s[j]){
				count++;
			}
			else if((s2[j]!=s[j])&&(s[j]=='?')){
				count++;
			}
			else{
				break;
			}
			if(count==ws){
			    anag++;
		    }
		}
	}
	for(int i=ws;i<siz;i++){
		s.pb(s1[i]);
		s.erase(s.begin());
		sort(s.begin(),s.end());
		// cout<<s<<endl;
		int count=0;
		for(int j=0;j<ws;j++){
			if(s2[j]==s[j]){
				count++;
			}
			else if((s2[j]!=s[j])&&(s[j]=='?')){
				count++;
			}
			else{
				break;
			}
			cout<<count<<endl;
		}
		if(count==ws){
			anag++;
		}
	}
	cout<<anag<<endl;

	return 0;
}