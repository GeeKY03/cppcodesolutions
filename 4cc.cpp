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
		vi v;
		for(int i=0;i<n;i++){
			int n1;
			cin>>n1;
			v.pb(n1);
		}
		int count=1;
		for(int i=1;i<n;i++){
			if(v[i]==v[i-1]){
				continue;
			}
			else{
				count++;
			}
		}
		cout<<count<<endl;
	}

	return 0;
}