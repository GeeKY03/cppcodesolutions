#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int u,v;
		cin>>u>>v;
		long double x=1;
		long double y=0;
		x=((y*(u))/(v*v))*(-1);
		for(y=1;y>0;y++){
			if(x==(int(x))){
				cout<<x<<" "<<y<<endl;
				break;
			}
		}
	}
	return 0;
}