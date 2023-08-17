#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count=1;
		int r=0;
		int b=0;
		int ind=0;
		char array[n];
		for(int i=0;i<n;i++){
			char a;
			cin>>a;
			array[i]=a;
			if((count==1)&&(a!='?')){
				if(a=='R'){
					r++;
					count--;
					ind=i;
				}
				else{
					b++;
					count--;
					ind=i;
				}
			}
		}
		if((r==0)&&(b==0)){
			for(int i=1;i<=n;i++){
				if(i%2==0){
					cout<<"R";
				}
				else{
					cout<<"B";
				}
			}
			cout<<endl;
		}
		else{
			if((r>0)&&(ind%2==0)){
				for(int i=1;i<=n;i++){
					if((array[i]=='?')&&(i%2==0)){
						cout<<"R";
					}
					else if((array[i]=='B')&&(i%2!=0)){
						cout<<"B";
					}
				}
				cout<<endl;
			}
			else if((r>0)&&(ind%2!=0)){
				for(int i=1;i<=n;i++){
					if((array[i]=='?')&&(i%2==0)){
						cout<<"B";
					}
					else if((array[i]=='B')&&(i%2!=0)){
						cout<<"R";
					}
				}
				cout<<endl;
			}
			else{
				cout<<"HEHE"<<endl;
			}
		}
	}
	return 0;
}