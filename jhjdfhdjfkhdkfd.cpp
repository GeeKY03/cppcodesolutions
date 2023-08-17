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
	string s,s1;
	cin>>s;
	ll len=s.length();
	s1="vvovv";
	ll wowf=0;
	ll x=0;
	ll o=0;
	for(int i=1;i<len;i++){
		if(s[i]=='o'){
			o+=x;
		}
		else if((s[i]=='v')&&(s[i-1]=='v')){
			wowf+=o;
			x++;
		}
	}
	cout<<wowf<<endl;
	return 0;
}
