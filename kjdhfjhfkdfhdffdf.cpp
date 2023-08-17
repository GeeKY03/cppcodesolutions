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
		int n,m;
		cin>>n>>m;
		string arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		vi difv;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				ll diff=0;
			    for(int k=0;k<m;k++){
				    diff+=abs(arr[i][k]-arr[j][k]);
			    }
			    difv.pb(diff);
			}
		}
		sort(difv.begin(),difv.end());
		cout<<difv[0]<<endl;
	}

	return 0;
}