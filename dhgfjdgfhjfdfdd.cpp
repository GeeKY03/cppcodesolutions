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
	int len=s.length();
	vector<string> v;
	for(int i=0;i<len-9;i++){
		if(((s[i+2])=='-')&&(s[i+5]=='-')&&(s[i]!='-')&&(s[i+1]!='-')&&(s[i+3]!='-')&&(s[i+4]!='-')&&(s[i+6]!='-')&&(s[i+7]!='-')&&(s[i+8]!='-')&&(s[i+9]!='-')&&(s[i+6]=='2')&&(s[i+7]=='0')&&(s[i+8]=='1')&&(s[i+9]>='3')&&(s[i+9]<='5')){
			// Jan
			if((s[i+3]=='0')&&(s[i+4]=='2')){
				if((s[i]<='2')){
					v.pb(s.substr(i,10));
				}
			}
			else{
				v.pb(s.substr(i,10));
			}		
		}
	}
	sort(v.begin(),v.end());
	vector<pair<int,string>> v1;
	int count=1;
	int siz=v.size();
	for(int i=1;i<siz;i++){
		if(v[i]==v[i-1]){
			count++;
			if(i==siz-1){
				pair<int, string> p={count,v[i]};
			    v1.pb(p);
			}
		}
		else{
			pair<int, string> p={count,v[i-1]};
			v1.pb(p);
			count=1;
		}
	}
	sort(v1.begin(),v1.end());
	cout<<v1[0].second<<endl;
	return 0;
}