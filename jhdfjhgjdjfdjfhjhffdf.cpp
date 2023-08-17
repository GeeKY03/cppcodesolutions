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
	int t;
	cin>>t;{
		while(t--){
			int n,k;
			cin>>n>>k;
			vi v;
			for(int i=0;i<n*k;i++){
				if(i<n){
					int a;
					cin>>a;
					v.pb(a);
				}
			}
			for(int i=0;i<n;i++){
				int count=0;
				for(int j=0;j<n;j++){
					if((v[i]==v[j])&&(i!=j)){
						count++;
					}
				}
				cout<<count<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}