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
	int casee=1;
	while(t--){
		int n;
		cin>>n;
		vi v;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			v.pb(a);
		}
		int count=0;
		for(int i=0;i<n;i++){
			while(v[i]!= (i+1)){
				swap(v[i],v[v[i]-1]);
				count++;
			}
		}
		cout<<"Case "<<casee<<": "<<count<<endl;
		casee++;
	}

	return 0;
}