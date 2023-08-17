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
	string s;
	cin>>s;
	int len =s.length();
	map<string,int> mp;
	for(int i=0;i<len;i++){
		if(((s[i+2])=='-')&&(s[i+5]=='-')&&(s[i]!='-')&&(s[i+1]!='-')&&(s[i+3]!='-')&&(s[i+4]!='-')&&(s[i+6]!='-')&&(s[i+7]!='-')&&(s[i+8]!='-')&&(s[i+9]!='-')&&(s[i+6]=='2')&&(s[i+7]=='0')&&(s[i+8]=='1')&&(s[i+9]>='3')&&(s[i+9]<='5')){
			if((s[i]=='0')&&(s[i+1]=='0')){
				continue;
			}
			else if(((s[i+3]=='1')&&(s[i+4]=='1'))||(s[i+3]=='0')&&(s[i+4]=='9')){
				if((s[i]=='3')&&(s[i+1]>'0')){
					continue;
				}
				else{
					mp[s.substr(i,10)]++;
				}
			}
			else if((s[i+3]=='0')&&(s[i+4]=='2')){
				if((s[i]<='2')){
					if((s[i]=='2')&&(s[i+1]>'8')){
						continue;
					}
					else{
						mp[s.substr(i,10)]++;
					}
				}
			}
			else{
				mp[s.substr(i,10)]++;
			}
		}
	}
	int max=0;
	int pos=0;
	int count=0;
	for(auto x:mp){
		if(x.second>max){
			max=x.second;
			pos=count;
		}
		count++;
	}
	int ctr=0;
	for(auto x: mp){
		if(ctr==pos){
			cout<<x.first;
			break;
		}
		ctr++;
	}

	return 0;
}