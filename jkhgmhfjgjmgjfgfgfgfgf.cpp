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
	ll t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vi a,b;
		for(int i=0;i<n;i++){
			ll x=0;
			cin>>x;
			a.pb(x);
		}
		for(int i=0;i<n;i++){
			ll x=0;
			cin>>x;
			b.pb(x);
		}
		int flag=0;
		for(int i=0;i<n-1;i++){
			if((i==1)&&(a[i-1]==b[i-1])&&(a[i]==b[i])){
				continue;
			}
			else if(a[i]==b[i]){
				continue;
			}
			else{
				if(a[i]==a[i]+1){
				for(int j=i+2;j<n;j++){
					if(a[j]==a[i]){
						rotate(a.begin()+i+1, a.begin()+1,a.begin()+j);
						if(i==0){
							continue;
							break;
						}
						else{
							i--;
							break;
						}
					}
					else if(j==n-1){
						flag=1;// no element found so not possible
						break;
					}
				}
			    }
			    else{
			    	for(int j=i+1;j<n;j++){
					if(a[j]==a[i]){
						rotate(a.begin()+i+1, a.begin()+1,a.begin()+j);
						if(i==0){
							continue;
							break;
						}
						else{
							i--;
							break;
						}
					}
					else if(j==n-1){
						flag=1;// no element found so not possible
						break;
					}
				}
			    }
			}
			if(flag==1){
				break;
			}
		}
		if(flag==1){
			cout<<"NO"<<endl;
		}
		else{
			ll count=0;
			for(int i=0;i<n;i++){
				if(a[i]==b[i]){
					count++;
				}
				if(count==n){
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
		}
	}

	return 0;
}



