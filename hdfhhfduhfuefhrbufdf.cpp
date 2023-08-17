#include<bits/stdc++.h>
using namespace std;
const int M= 1e9+7;

int Binexpitr(int a, int b){
	int ans=1;
	while(b){
		if(b&1){
			ans= (ans * 1LL * a) % M ; 
		}
		else{
			a= ( a * 1LL * a ) % M   ;
		}
		b >>= 1 ;
	}
	return ans;
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<Binexpitr(a,b)<<endl;
	return 0;
} 