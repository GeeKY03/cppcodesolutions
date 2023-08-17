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
		vlli v;
		int codd=0;
		for(int i=0;i<n;i++){
			ll a;
			cin>>a;
			v.pb(a);
		}
		int oper=0;
		int flag=0;
		for(int i=0;i<n;i++){
			if(v[i]&1){
				v[i]=v[i]-1;
				flag=1;
			}
		}
		if(flag==1){
			oper++;
		}
		for(int i=0;i<n;i++){
			while(v[i]!=0){
				oper++;
				int num;
				for(int k=0;k>=0;k++){
					if(v[i]/(int)(pow(2,k))==0){
						num=pow(2,k-1);
						break;
					}
				}
				for(int j=i;j<n;j++){
					if(v[j]>=num){
							v[j]=v[j]-num;
					}
				}
			}
		}
		cout<<oper<<endl;
	}

	return 0;
}