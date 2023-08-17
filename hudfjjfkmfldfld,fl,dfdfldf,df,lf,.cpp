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

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vi v;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			v.pb(num);
		}
		ll oper=0;
		for(int i=1;i<n;i++){
			if(i==n-1){
				if(v[i]<v[i-1]){
					oper+=(v[i-1]-v[i]);
				}
				else{
					continue;
				}
			}
			else{
				if((v[i]<v[i-1])&&(v[i+1]<v[i-1])){
					ll a=v[i-1]-v[i+1];
					ll b=v[i-1]-v[i];
					oper+=max(a,b);
					v[i]=v[i-1];
					v[i+1]=v[i-1];
					i++;
				}
				else if((v[i]<v[i-1])&&(v[i+1]>=v[i-1])){
					ll a=v[i-1]-v[i];
					oper+=a;
					v[i]=v[i-1];
				}
				else{
					continue;
				}
			}
		}
		cout<<oper<<endl;
	}

	return 0;
}