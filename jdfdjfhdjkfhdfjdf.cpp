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
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		v.pb(s);
	}
	for(int i=0;i<n;i++){
		set<pair<int,string>> sett;
		string str1=v[i];
		for(int j=0;j<9;j++){
			string str2;
			for(int k=j;k<9;k++){
				char c=v[i][k];
				str2.pb(c);
				ll count=0;
				for(int l=0;l<n;l++){
					string str3=v[l];
					if(str3.find(str2)!=string::npos){
						count++;
					}
				}
				if(count==1){
					pair<int,string> p={k-j,str2};
					sett.insert(p);
				}
			}
		}
		for(auto x:sett){
			cout<<x.second<<endl;
			break;
		}
	}

	return 0;
}