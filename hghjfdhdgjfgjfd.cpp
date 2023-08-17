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
		vector<pair<int,string>> final;
		string str1=v[i];
		for(int j=0;j<9;j++){
			string str2;
			for(int k=j;k<9;k++){
				str2.pb(v[i][k]);
				ll count=0;
				for(int l=0;l<n;l++){
					string str3=v[l];
					if(str3.find(str2)!=string::npos){
						count++;
						pair <int,string> p;
						if(count==1){
							p={str2.size(),str2};
						}
						if(count>1){
							break;
						}
						else if((count==1)&&(l==n-1)){
							final.pb(p);
						}
					}
				}
			}
		}
		sort(final.begin(),final.end());
		cout<<final[0].second<<endl;
	}

	return 0;
}