#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,g,b;
		cin>>n>>g>>b;
		long long int x=n;
		if(n%2!=0){
			n=n+1;
		} 
		if(g>=(n/2)){
			cout<<x<<endl;
		}
		else if(g<(n/2)){
			int hl=n/2;
			int gs=0;
			if(hl%g==0){
				gs=hl/g;
				if(((gs-1)*b)>=(x-hl)){
					cout<<(gs*g)+((gs-1)*b)<<endl;
				}
				else{
					cout<<(gs*g)+(x-hl)<<endl;
				}
			}
			else if(hl%g!=0){
				gs=hl/g;
				if((gs*b)>=(x-hl)){
					cout<<(gs*g)+(gs*b)+(hl%g)<<endl;
				}
				else{
					cout<<(gs*g)+(hl%g)+(x-hl)<<endl;
				}
			}
		}
	}
	return 0;
}