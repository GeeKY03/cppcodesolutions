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
		vector<char> v;
		int vow=0;
		int cons=0;
		ll num=1;
		for(int i=0;i<n;i++){
			char a;
			cin>>a;
			if((v[i]=='a')||(v[i]=='e')||(v[i]=='i')||(v[i]=='o')||(v[i]=='u')){
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
			set<char> alpha;
			string s="cglr";
			alpha.insert('c');
			alpha.insert('g');
			alpha.insert('l');
			alpha.insert('r');
			// for(int i=0;i<4;i++){
			// 	alpha.insert(s[i]);
			// }
			ll num=1;
			for(int i=0;i<n;i++){
				if(alpha.find(v[i])!=alpha.end()){
					num*=2;
				}
			}
			cout<<num<<endl;
		}
	}

	return 0;
}