#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int x,y,n;
		cin>>x>>y>>n;
		int mod=n%x;
		if(mod==y){
			cout<<n<<endl;
		}
		else if(mod>y){
			cout<<((n+y)-(mod))<<endl;
		}
		else{
			cout<<(n+y)-(x+mod)<<endl;
		}
	}
	return 0;
}