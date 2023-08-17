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
		int array[n];
		for(int i=0;i<n;i++){
			ll num;
			cin>>num;
			array[i]=num;
		}
		sort(array, array+n);
		ll ans= array[0]*array[n-1];
		int count=0;
		for(int i=0;i<n;i++){
			if(ans%array[i]==0){
				count++;
			}
		}
		if(count==n){
			cout<<ans<<endl;
		}
		else{
			cout<<-1<<endl;
		}

	}

	return 0;
}