#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int r1,c1=0;
		int r2,c2=0;
		int count=0;
		for(int i=1;i<=n;i++){
			string s;
			cin>>s;
			for(int j=0;i<s.size();j++){
				if((s[j]=='*')&&(count==0)){
					r1=i;
					c1=j+1;
					count++;
				}
				else if((s[j]=='*')&&(count==1)){
					r2=i;
					c2=j+1;
				}
			}
		}
		cout<<count<<endl;
		cout<<r1<<" "<<c1<<endl;
		cout<<r2<<" "<<c2<<endl;
		cout<<endl;
	}
	return 0;
}