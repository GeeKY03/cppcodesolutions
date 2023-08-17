#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		long long int n,g,b;
		cin>>n>>g>>b;
		long long int x=n;
		if(n%2!=0){
			n+=1;
		}
		if(g>=(n/2)){
			cout<<x<<endl;
		}
		else if(g<(n/2)){
			int a=0;
			int y=n/2;
			long long int extra=0;
			if((y)%g==0){
				a=(y)/g;
				if(((a-1)*b)>=(x-a)){
					// cout<<"HEHE"<<endl;
					cout<<(a*g)+((a-1)*b)<<endl;
				}
				else{
					// cout<<"HEHE"<<endl;
					cout<<(a*g)+((a-1)*b)+((n-a)-((a-1)*b))<<endl;
				}
			}
			else{
				// cout<<"HEHE"<<endl;
				a=(y/g);
				// extra=g-(y%g);
				if(((a)*b)>=(x-)){
					cout<<(a*g)+(y%g)+((a)*b)<<endl;;
				}
				else{
					cout<<(a*g)+(a*b)+(y%g)+((x-a)-(a*b))<<endl;
				}
			}
			// if(((a-1)*b)>=(x-n)){
			// 	cout<<(a*g)+((a-1)*b)<<endl;;
			// }
			// else{
			// 	cout<<(a*g)+((a-1)*b)+((x-n)-((a-1)*b)-extra)<<endl;;
			// }
		}
	}
	return 0;
}