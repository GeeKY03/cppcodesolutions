#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a,b;
		cin>>a>>b;
		int both=0;
		int ascore=0;
		int bscore=0;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			if((num%a==0)&&(num%b==0)){
				both++;
			}
			else if((num%a==0)&&(num%b!=0)){
				ascore++;
			}
			else if((num%a!=0)&&(num%b==0)){
				bscore++;
			}
		}
		if(both==0){
			if(ascore>bscore){
				cout<<"BOB"<<'\n';
			}
			else{
				cout<<"ALICE"<<'\n';
			}
		}
		else{
			if(ascore+1>bscore){
				cout<<"BOB"<<endl;
			}
			else{
				cout<<"ALICE"<<endl;
			}
		}
	}
	return 0;
}