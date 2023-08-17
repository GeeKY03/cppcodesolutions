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
	cin>>s;
	int len =s.size();
	vi v;
	v.pb(0);
	for(int i=0;i<len-1;i++){
		for(int j=len-1;j>i+1;j--){
			if(s[i]<s[j]){
				if((j-i+1)>v[0]){
					v.pb(j-i+1);
					break;
				}
			}
		}
		sort(v.rbegin(),v.rend());
		if((len-i)<=v[0]){
			break;
		}
	}
	cout<<v[0]<<endl;


	return 0;
}