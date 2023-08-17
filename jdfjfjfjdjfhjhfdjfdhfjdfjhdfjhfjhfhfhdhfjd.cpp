#include<bits/stdc++.h>
using namespace std;
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
		if(g>=n/2){
			cout<<x<<endl;
		}
		else if(g<(n/2)){
			int gs=0;
			int hl=n/2;
			long long int extra=0;
			if(hl%g==0){
				if((gs-1)*b>=(x-hl)){
					cout<<((gs)*g)+((gs-1)*b)<<endl;
				}
				else{
					cout<<((gs)*g)+((gs-1)*b)+((x-hl)-((gs-1)*b))<<endl;
				}
			}
			else{
				cout<<"HEHEE"<<endl;
			}
		}
	}
	return 0;
}