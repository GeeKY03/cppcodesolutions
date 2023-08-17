// Cyclic Rotation
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
		vi a,b;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			a.pb(x);
		}
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			b.pb(x);
		}
		int flag=0;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				for(int j=n-1;j>=i+1;j--){
					if(a[j]==a[i]){
						while(a[i]!=b[i]){
						rotate(a.begin()+i,a.begin()+1,a.begin()+j);
					    }
				        break;
					}
					else if((j==i+2)&&(a[i]!=a[j])){
						flag=1;
						break;
					}
				}
			}
			else{
				continue;
			}
		}
		for(auto x:a){
			cout<<x<<" ";
		}
	}

	return 0;
}