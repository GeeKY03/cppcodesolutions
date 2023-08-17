#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long int n,m,s;
		cin>>n>>m>>s;
		for(int j=0;j<m;j++){
			if(j==0){
				continue;
			}
			else if(s<n){
				s++;
				if(j==m-1){
					cout<<s<<endl;
				}
			}
			else if(s==n){
				s=1;
				if(j==m-1){
					cout<<s<<endl;
				}
			}
		}
	}
	return 0;
}