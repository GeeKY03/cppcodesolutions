#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
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
	sort(v.rbegin(),v.rend());
	int len =v[0].size();
	for(int i=0;i<len;i++){
		string s1;
		string s2;
		if(n==1){
			if(v[0][i]=='?'){
				cout<<"x";
			}
			else{
				cout<<v[0][i];
			}
		}
		else if(v[0][i]=='?'){
			cout<<"xy";
		}
		else if(v[1][i]=='?'){
			cout<<v[0][i];
		}
		else{
			s1=v[0][i];
			for(int j=1;j<n;j++){
				if(v[j][i]=='?'){
					if(s2.size()==0){
						cout<<s1;
					}
					else{
						cout<<'?';
					}
				}
				else if(v[j][i]==v[0][i]){
					if(j==n-1){
						cout<<v[0][i];
					}
					else{
						continue;
					}
				}
				else if(v[j][i]!=v[0][i]){
					cout<<'?';
					break;
				}
			}
		}
	}




	return 0;
}