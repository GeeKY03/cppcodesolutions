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
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int best=1;
		int prod=a[0];
		int si=0;
		int ei=0;
		for(int i=1;i<n;i++){
			prod=max(a[i], prod*a[i]);
			if(prod==a[i]){
				si=i;
			}
			if(prod>=best){
				ei=i;
			}
			best=max(best,prod);
		}
		cout<<si<<" "<<n-ei-1<<endl;
	}

	return 0;
}