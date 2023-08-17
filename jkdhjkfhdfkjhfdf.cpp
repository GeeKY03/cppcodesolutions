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
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		v.pb(s);
	}
	ll sets=0;
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int l=j+1;l<n;l++){
				ll count=0;
				for(int m=0;m<k;m++){
					if((v[i][m]!=v[j][m])&&(v[i][m]!=v[l][m])&&(v[j][m]!=v[l][m])){
						count++;
					}
					else if((v[i][m]==v[j][m])&&(v[i][m]==v[l][m])&&(v[j][m]==v[l][m])){
						count++;
					}
					else{
						break;
					}
				}
				if(count==k){
					sets++;
				}
			}
		}
	}
	cout<<sets<<endl;

	return 0;
}