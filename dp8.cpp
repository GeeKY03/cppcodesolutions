#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);


int frog(int ans[], int n){
	for(int i=0;i<n;i++){
		if(i+1<=n){
			ans[i+1]+=ans[i];
		}
		if(i+2<=n){
			ans[i+2]+=ans[i];
		}
	}
	return ans[n];
}

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	cin>>n;
	int ans[n+1]={0};
	// cout<<frog(n);
	ans[0]=1;
	cout<<frog(ans,n)<<endl;

	return 0;
}