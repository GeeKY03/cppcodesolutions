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
		int n,x,y;
		cin>>n>>x>>y;
		int a[n];
		int odd=0;
		int even=0;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			if(a&1){
				odd++;
			}
			else{
				even++;
			}
		}
		if(((odd>0)&&(even>0))&&(((x%2==0)&&(y%2==0)))){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}