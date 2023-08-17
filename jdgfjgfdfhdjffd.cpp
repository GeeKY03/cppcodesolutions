#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	string s;
	int k;
	cin>>s;
	cin>>k;
	int cc=0;
	int sf=0;
	int len=s.size();
	cout<<len<<endl;
	for(int i=0;i<len;i++){
		if(s[i]=='*'){
			sf++;
		}
		else if(s[i]=='?'){
			cc++;
		}
	}
	if((len-sf-cc)==k){
		for(int i=0;i<len;i++){
			if((s[i]=='*')||(s[i]=='?')){
				continue;
			}
			else{
				cout<<s[i];
			}
		}
	}
	else if((len-sf-cc)<k){
		if(sf==0){
			cout<<"Impossible"<<endl;
		}
		else{
			int count=k-(len-sf-cc);
			string s1;
			for(int i=len-1;i>=0;i--){
				if((s[i]=='*')&&(count>0)){
					for(int j=0;j<count;j++){
						s1.pb(s[i-1]);
						count--;
					}
				}
				else{
					if((s[i]=='*')||(s[i]=='?')){
						continue;
					}
					else{
						s1.pb(s[i]);
					}
				}
			}
		}
	}
	else {
		if((len-sf-cc)>k){
			cout<<"Impossible"<<endl;
		}
		else{
			int count=(len-sf-cc)-k;
			for(int i=0;i<len;i++){
				if(((s[i+1]=='?')||(s[i+1]=='*'))&&(count>0)){
					i++;
					continue;
				}
				else{
					if((s[i]=='?')||(s[i]=='*')){
						continue;
					}
					else{
						cout<<s[i];
					}
				}
			}
		}
	}


	return 0;
}