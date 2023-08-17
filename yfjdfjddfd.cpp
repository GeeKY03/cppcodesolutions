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
	ll n,k;
	cin>>n>>k;
	vector<string> v;
	set<string> sett;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		v.pb(s);
		sett.insert(s);
	}
	ll sets=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			string str;
			for(int l=0;l<k;l++){
				if(v[i][l]==v[j][l]){
					str.pb(v[i][l]);
				}
				else if(v[i][l]!=v[j][l]){
					string x="SET";
					for(int m=0;m<3;m++){
						if((x[m]!=v[i][l])&&(x[m]!=v[j][l])){
							str.pb(x[m]);
						}
					}
				}
				else{
					break;
				}
			}
			if(sett.find(str)!=sett.end()){
				sets++;
			}
		}
	}
	cout<<sets/3<<endl;

	return 0;
}