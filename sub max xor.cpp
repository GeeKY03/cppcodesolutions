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
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vi v;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int k=1;k<=n;k++){
			int j,max;
			for(int i=0;i<=n-k;i++){
				max=a[i];
				for(j=1;j<k;j++){
					if(a[i+j]>max){
						max=a[i+j];
					}
				}
				v.pb(max);
			}
		}
		int len=v.size();
		ll sum =0;
		for(int i=0;i<len;i++){
			for(int j=i;j<len;j++){
				sum+=(v[i]^v[j]);
			}
		}
	}

	return 0;
}