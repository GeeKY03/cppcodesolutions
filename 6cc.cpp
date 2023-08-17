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
		int vow=0;
		int cons=0;
		vector<char> v;
		for(int i=0;i<n;i++){
			char a=s[i];
			if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')){
				vow++;
			}
			else{
				cons++;
			}
			v.pb(a);
		}
		if(vow==n){
			cout<<1<<endl;
		}
		else{
			ll count=1;
		    ll num=1;
		    set<char> sett;
		    sett.insert('c');
		    sett.insert('g');
		    sett.insert('l');
		    sett.insert('r');
		    for(auto ch:s){
			    if(sett.find(ch)!=sett.end()){
				    num*=2;
				    num=num%1000000007;
			    }
		    }
		    cout<<num<<endl;
		}
	}

	return 0;
}