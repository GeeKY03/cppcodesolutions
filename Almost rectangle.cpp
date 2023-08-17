#include<iostream>
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string a;
		int count=0;
		int r1,c1;
		int r2,c2;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a;
				for(int i=1;i<=a.size();i++){
				    if((a[i-1]=='*')&&(count=0)){
					    r1=i;
					    c1=j;
					    count++;
				    }
				    else{
					    r2=i;
					    c2=j;
				    }
				}
			}
		}
		cout<<r1<<" "<<c1;
		cout<<r2<<" "<<c2;
		cout<<endl;
	}
	return 0;
}