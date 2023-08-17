#include<bits/stdc++.h>
using namespace std;
int main(){



	ios::sync_with_stdio(false);
	cin.tie(0);




	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int one=1;
		int two=2;
		for(int i=1;i<=n;i++){
			if(((i*2)+(i-1))==n){
				one=i-1;
				two=i;
				break;
			}
			else if((((i-1)*2)+(i))==n){
				one=i;
				two=i-1;
				break;
			}
			else if(((i*2)+i)==n){
				one=i;
				two=i;
				break;
			}
		}
		if((one==two)){
			for(int i=1;i<=(2*one);i++){
				if(i%2==0){
					cout<<1;
				}
				else{
					cout<<2;
				}
			}
			cout<<'\n';
		}
		else if(one>two){
			for(int i=1;i<=(one+two);i++){
				if(i%2!=0){
					cout<<1;
				}
				else{
					cout<<2;
				}
			}
			cout<<'\n';
		}
		else if(two>one){
			for(int i=1;i<=(one+two);i++){
				if(i%2!=0){
					cout<<2;
				}
				else{
					cout<<1;
				}
			}
			cout<<'\n';
		}
	}
	return 0;
}