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
			if(v[i]<v[i-1]){
				ll min=v[i];
				for(int j=i;j<n;j++){
					if(v[j]<=v[j-1]){
						if(v[j-1]<min){
							min=v[j-1];
							i=j-2;
						}
					}
				}
				oper+=v[i-1]-min;
			}
		}
		cout<<oper<<endl;
	}

	return 0;
}