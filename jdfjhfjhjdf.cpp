// D. Cyclic Rotation
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
		ll n;
		cin>>n;
		vi a,b;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			a.pb(x);
		}
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			b.pb(x);
		}
		ll count=0;
		int flag=0;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				for(int j=i+1;j<n;j++){
					if(a[i]==a[j]){
						rotate(a.begin()+i,a.begin()+1,a.begin()+j+1);
						break;
					}
					else if((j==n-1)&&(a[i]!=a[j])){
						flag=1; //Not found
						break;
					}
				}
				if(a[i]!=b[i]){
					i--;
				}
				else{
					count++;
				}
			}
			else{
				count++;
			}
			if(flag==1){
				break;
			}
		}
		if(flag==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}